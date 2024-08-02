#include <iostream> 
#include <unordered_map> 
#include <set> 

using namespace std;

string S[400000];
int exact_hash[400000];

unordered_map<int, set<int>> candidates;

const int MOD = 1000000009;
int P = 7;

int calculate_exact_hash(const string& s) {
  long long result = 0;
  long long power = 1;
  for (int i = 0; i < s.length(); i++) {
    result = (result + power * (s[i] - 'a' + 1)) % MOD;
    power = (power * P) % MOD;
  }
  
  return result;
}

void calculate_candidates(int index, int hash_value) {
  const string& s = S[index];
  long long power = 1;
  for (int i = 0; i < s.length(); i++) {
    long long result = hash_value;
    result -= power * (s[i] - 'a' + 1);
    result += power * ('d' - 'a' + 1);
    result %= MOD;
    while (result < 0) result += MOD;
    candidates[result].insert(index);
    
    power *= P;
    power %= MOD;
  }
}

bool differs_in_exactly_one_character(const string& s, const string& t) {
  int d = 0;
  if (s.length() != t.length()) return false;
  
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != t[i]) {
      d++;
    }
  }
  
  return d == 1;
} 

bool check(const string& s) {
  int hash_value = calculate_exact_hash(s);
  
  long long power = 1;
  for (int i = 0; i < s.length(); i++) {
    long long result = hash_value;
    result -= power * (s[i] - 'a' + 1);
    result += power * ('d' - 'a' + 1);
    result %= MOD;
    while (result < 0) result += MOD;
    
    for (auto c: candidates[result]) {
      if (exact_hash[c] != hash_value && differs_in_exactly_one_character(s, S[c])) return true;
    }
    
    power *= P;
    power %= MOD;
  }
  
  return false;
}

int main() {
  int n, q;
  cin >> n >> q;
  
  for (int i = 0; i < n; i++) {
    cin >> S[i];
    exact_hash[i] = calculate_exact_hash(S[i]);
    calculate_candidates(i, exact_hash[i]);
  }
  
  for (int i = 0; i < q; i++) {
    string query;
    cin >> query;
    cout << (check(query) ? "YES" : "NO") << endl;
  }
  
  return 0;
}
