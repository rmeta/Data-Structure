#include <bits/stdc++.h>

using namespace std;

long long solve(int l, int r, int n, vector<int> &section) {
  // cout << "Solving for " << l << ' ' << r << ' ' << n << endl;
  // cout << "section: ";
  // for (auto e: section) cout << e << ' ';
  // cout << endl;


  if (r == -1) r = n;
  long long result = 0;
  for (auto x: section) {
    long long left_choises = x - l;
    long long right_choises = r - x;
    // cout << left_choises << '*' << right_choises << endl;
    result += left_choises * right_choises;
    l = x;
  }
  // cout << "result is: " << result << endl;
  return result;
}

#define same_bound(x, y) (l[x] == l[y] && r[x] == r[y])

int main() {
  int n, q;
  cin >> n >> q;

  vector<int> v(n), l(n), r(n);
  for (int i = 0; i < n; i++) cin >> v[i];

  // for each i, find largest j
  // s.t. arr[j] > arr[i] and j < i
  stack<int> s;
  s.push(-1);
  for (int i = 0; i < n; i++) {
    while (s.top() != -1 && v[s.top()] <= v[i]) s.pop();
    l[i] = s.top();
    s.push(i);
  }

  // for each i
  // calculate smallest j
  // s.t. j > i && arr[j] > arr[i]
  while (!s.empty()) s.pop();
  s.push(-1);
  for (int i = n - 1; i >= 0; i--) {
    while (s.top() != -1 && v[s.top()] <= v[i]) s.pop();
    r[i] = s.top();
    s.push(i);
  }

  // for each x, calculate positions i, where arr[i] is x
  map<int, queue<int>> m;
  for (int i = 0; i < n; i++) {
    m[v[i]].push(i);
  }

  // precomputing answer(x)
  // for each x in array 
  map<int, long long> answer;
  for (auto e: m) {
    int x = e.first;
    queue<int> &p = e.second;

    answer[x] = 0;
    // find all non-overlapping sections of 
    // y ... x ... x ... x ... z 
    // where y > x and z > x and every element between y and z
    // are less than or equal to x
    //
    // then for each such section, compute the number of (i, j) pairs 
    // in it such that v.max_between(i, j) == x and add it to answer[x]
    
    while (!p.empty()) {
      vector<int> section;
      while (!p.empty() && (section.empty() || same_bound(section.back(), p.front()))) {
        section.push_back(p.front());
        p.pop();
      }
      answer[x] += solve(l[section[0]], r[section[0]], n, section);
    }
  }

  while (q--) {
    int x;
    cin >> x;
    cout << answer[x] << endl;
  }

  return 0;
}
