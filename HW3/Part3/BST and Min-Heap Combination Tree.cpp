#include <bits/stdc++.h>

using namespace std;

struct Node {
  int index;
  int a, b;
};

int left_child[1002];
int right_child[1002];
int parent[1002];

int solve(vector<Node> list) {
  if (list.empty()) return 0;
  
  Node root = list.front();
  for (auto e: list) {
    if (e.b < root.b) {
      root = e;
    }
  }
  
  vector<Node> left_nodes, right_nodes;
  
  for (auto e: list) {
    if (e.a < root.a) {
      left_nodes.push_back(e);
    } else if (e.a > root.a) {
      right_nodes.push_back(e);
    }
  }
  
  int l = solve(left_nodes);
  left_child[root.index] = l;
  
  int r = solve(right_nodes);
  right_child[root.index] = r;
  
  parent[l] = parent[r] = root.index;
  
  return root.index;
}

int main(){
  int n;
  cin >> n;
	vector<Node> nodes(n);
  
  for (int i = 0; i < n; i++) {
    nodes[i].index = i + 1;
    cin >> nodes[i].a >> nodes[i].b;
  }
  
  solve(nodes);
  
  cout << "YES" << '\n';
  for (int i = 0; i < n; i++) {
    cout << parent[i + 1] << ' ' 
         << left_child[i + 1] << ' '
         << right_child[i + 1] << '\n';
  }
}

