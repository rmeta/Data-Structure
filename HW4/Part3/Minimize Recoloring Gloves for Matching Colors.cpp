#include <bits/stdc++.h>

using namespace std;

using Color = int;

struct Node {
  Color color;
  list<int> adj;
  bool visited = false;
};

Node tree[200200];

int cost = 0;

vector<int> comp;

void dfs(int index) {
  if (tree[index].visited) return;
  tree[index].visited = true;
  comp.push_back(index);
  for (auto e: tree[index].adj) dfs(e);
}

void process_comp() {
  map<Color, int> m;
  for (auto index: comp) {
    m[tree[index].color]++;
  }
  
  int mx = 0;
  for (auto p: m) {
    mx = max(mx, p.second);
  }
  
  cost += comp.size() - mx;
}

int main() { 
  int n, m, k;
  cin >> n >> m >> k;
  for (int i = 0; i < n; i++) {
    cin >> tree[i].color;
  }
  
  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    u--; v--;
    tree[u].adj.push_back(v);
    tree[v].adj.push_back(u);
  }
  
  for (int i = 0; i < n; i++) {
    if (tree[i].visited == false) {
      comp.clear();
      dfs(i);
      process_comp();
    }
  }
  
  cout << cost << endl;
  
  return 0;
}
