#include <iostream>

using namespace std;

string reverse(string s) {
  for (int i = 0; i < s.size() / 2; i++) {
    swap(s[i], s[s.length() - i - 1]);
  }
  return s;
}

template<class T>
class Node {
public:
  T value;
  Node<T> *next;
};

template<class T>
class LinkedList {
  Node<T> *head = nullptr;

public:
  void push(T x) {
    Node<T> *q = new Node<T>();
    q->value = x;
    q->next = head;
    head = q;
  }
  
  void pop() {
    Node<T> *e = head;
    head = head->next;
    delete e;
  }
  
  T top() {
    return head->value;
  }
  
  bool empty() { return head == nullptr; }
};

template<class T>
using stack = LinkedList<T>;

int get_precedence(char op) {
  if (op == '*' || op == '/') return 2;
  if (op == '-' || op == '+') return 1;
  if (op == '(' || op == ')') return 0;
  throw std::runtime_error("input is not an operator");
}

bool is_operator(char c) {
  string operators = "-+*/";
  return operators.find(c) != string::npos;
}

bool is_prefix(string s) {
  return is_operator(s[0]);
}

string prefix_to_postfix(string s) {
  s = reverse(s);
  stack<string> st;
  
  for (char c: s) {
    if (isspace(c)) {
      continue;
    } else if (is_operator(c)) {
      string r = "";
      r += st.top(); st.pop();
      r += st.top(); st.pop(); 
      r += c;
      st.push(r);
    } else {
      string r = "";
      r += c;
      st.push(r);
    }
  }
  
  return st.top();
}

string infix_to_prefix(string s) {
  s = reverse(s);
  
  stack<char> st;
  
  string result = "";
  
  for (char c: s) {
    switch (c) {
      case ' ':
        break;
      case ')':
        st.push(c); 
        break;
      case '(':
        while (st.top() != ')') {
          result += st.top();
          st.pop();
        }
        st.pop();
        break;
      case '*':
      case '/':
      case '+':
      case '-':
        while (!st.empty() && get_precedence(st.top()) > get_precedence(c)) {
          result += st.top();
          st.pop();
        }
      
        st.push(c);
        break;
      default:
        // assert(c >= '1' && c <= '9');
        result += c;
    }
  }
  
  while (!st.empty()) {
    result += st.top();
    st.pop();
  }
  
  return reverse(result);
}

int main() {
  string s;
  getline(cin, s);
  
  if (!is_prefix(s)) {
    cout << infix_to_prefix(s) << endl;
  } else {
    cout << prefix_to_postfix(s) << endl;
  }
  
  return 0;
}
