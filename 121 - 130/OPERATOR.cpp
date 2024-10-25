#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("OPERATOR.INP", "r", stdin);
  freopen("OPERATOR.OUT", "w", stdout);
  int n, x = 0; cin >> n;
  char c = '+', t = '-';
  for (int i = 0; i < n; i++) {
    string s; cin >> s;
    if (s[0] == c || s[2] == c) ++x;
    else --x;
  }
  cout << x;
}