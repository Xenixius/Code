#include <bits/stdc++.h>
using namespace std;

int kq(string S) {
  int d = 0,
  n = S.size();

  for (int i = 0; i < n; i++) {
    int a = 0, b = 0, x = 0;

    for (int j = i; j < n; j++) {
      char c = S[j];
      a |= isupper(c);
      b |= islower(c);
      x |= isdigit(c);

      if (j - i + 1 >= 6 && a && b && x)
        d++;
    }
  }

  return d;
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("PASSWORD.INP", "r", stdin);
  freopen("PASSWORD.OUT", "w", stdout);
  string S; cin >> S;
  cout << kq(S);
}