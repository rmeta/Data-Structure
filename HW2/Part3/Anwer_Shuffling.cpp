#include <bits/stdc++.h>

using namespace std;

class Node {
public:
  int value;
  Node *next;
};

class LinkedList {
  Node *head = nullptr;

public:
  
  void push(int x) {
    Node *q = new Node();
    q->value = x;
    q->next = head;
    head = q;
  }
  
  void print(Node *node) {
    if (node == nullptr) return;
    print(node->next);
    cout << node->value << ' ';
  }

  void print() {
    print(head);
    cout << endl;
  }
  
  void shiftHead(int n) {
    shiftFirstElements(1, n);
  }
  
  void shiftFirstElements(int n, int shiftAmount) {
    if (n == 0 || shiftAmount == 0) return;
    
    Node *l = head;
    for (int i = 0; i < n - 1; i++) {
      l = l->next;
    }
    
    Node *t = l->next;
    
    Node *h = t;
    for (int i = 0; i < shiftAmount - 1; i++) {
      h = h->next;
    }
    
    l->next = h->next;
    h->next = head;
    head = t;
  }
};

long long seed, a = 1103515245ll, m = 1ll << 31, c = 12345;

long long rng() {
  seed = (a * seed + c) % m;
  return seed;
}

long long createRandom(long long l, long long r) {
  return (rng() % (r - l + 1)) + l;
}

int main() {
  int n, t;
  cin >> n >> t >> seed;
  
  LinkedList l;
  for (int i = 0; i < n; i++) {
    l.push(i + 1);
  }
  
  for (int i = 0; i < t; i++) {
    int x = createRandom(0, n);
    int y = createRandom(0, n - x);
    l.shiftFirstElements(x, n - x - y);
  }
  
  l.print();
}
