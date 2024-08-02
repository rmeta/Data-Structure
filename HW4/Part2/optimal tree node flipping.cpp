#include <bits/stdc++.h>

using namespace std;

struct Node {
  int init, goal;
  int parent;
  list<int> adj;
  bool visited = false;
};

Node tree[100100];

int cost = 0;
vector<int> answer;

void dfs(int v, bool even_level, int ef, int of) {
  if (tree[v].visited) {
    return;
  }
  
  tree[v].visited = true;
  
  int new_ef = ef;
  int new_of = of;
  
  int cur = tree[v].init;
  if (even_level && ef % 2 == 1) cur = !cur;
  if (!even_level && of % 2 == 1) cur = !cur;
  
  // cout << cur << endl;
  
  if (cur != tree[v].goal) {
    if (even_level) new_ef = ef + 1;
    else new_of = of + 1;
    cost++;
    answer.push_back(v + 1);
  }
  
  for (auto c: tree[v].adj) {
    dfs(c, !even_level, new_ef, new_of);
  }
}

int main() { 
  int n;
  cin >> n;
  
  for (int i = 0; i < n - 1; i++) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    tree[a].adj.push_back(b);
    tree[b].adj.push_back(a);
  }
  
  for (int i = 0; i < n; i++) cin >> tree[i].init;
  for (int i = 0; i < n; i++) cin >> tree[i].goal;
  
  dfs(0, true, 0, 0);
  
  cout << cost << endl;
  sort(answer.begin(), answer.end());
  for (int e: answer) cout << e << endl;
  
  return 0;
}
