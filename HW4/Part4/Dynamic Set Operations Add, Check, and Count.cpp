#include <bits/stdc++.h> 

using namespace std;

class SegmentTree {
  int *data;
  int n;
  
  void add_recursive(int i, int l, int r, int x) {
    if (x < l || x > r) return;
    data[i]++;
    if (l == r) return;
    add_recursive(2 * i + 1, l, l + (r - l) / 2, x);
    add_recursive(2 * i + 2, r - (r - l) / 2, r, x);
  }
  
  int query_recursive(int i, int l, int r, int x) {
    if (r < x) return data[i];
    if (l >= x) return 0;
    return 
      query_recursive(2 * i + 1, l, l + (r - l) / 2, x) + 
      query_recursive(2 * i + 2, r - (r - l) / 2, r, x);
  }
  
public:
  SegmentTree(int _n)
  : n(_n) 
  {
    data = new int[2 * n];
    for (int i = 0; i < 2 * n; i++) {
      data[i] = 0;
    }
  }
  
  void add(int x) {
    add_recursive(0, 1, n, x);
  }
  
  int query(int x) {
    return query_recursive(0, 1, n, x);
  }
  
  bool ask(int x) {
    return (query(x + 1) - query(x)) == 1;
  }
};

struct Query {
  int type; 
  int x;
};

int main() {
  int n = 1;
  while (n < 100000) n *= 2;

  SegmentTree tree(n);
  
  int q;
  cin >> q;
  
  vector<Query> queries;
  
  for (int i = 0; i < q; i++) {
    int t, x;
    cin >> t >> x;
    
    Query obj;
    obj.type = t;
    obj.x = x;
    
    queries.push_back(obj);
  }
  
  set<int> ehsan;
  for (int i = 0; i < q; i++) {
    ehsan.insert(queries[i].x);
  }
  
  map<int, int> cache;
  
  int armita = 1;
  for (auto e: ehsan) {
    cache[e] = armita;
    armita++;
  }
  
  for (int i = 0; i < q; i++) {
    queries[i].x = cache[queries[i].x];
  }
  
  for (auto q: queries) {
    if (q.type == 1) {
      tree.add(q.x);
    } else if (q.type == 2) {
      cout << (tree.ask(q.x) ? "YES" : "NO") << endl;
    } else {
      cout << tree.query(q.x) << endl;
    }
  }
  
  return 0;
}
