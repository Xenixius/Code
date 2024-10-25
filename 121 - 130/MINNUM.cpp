#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("MINNUM.INP", "r", stdin);
  freopen("MINNUM.OUT", "w", stdout);
  int T; cin >> T;
  while (T--) {
      int n, k; cin >> n >> k; 
      string S; cin >> S; 

        
      if (n == 1 && k > 0) S[0] = '0';
      else {
        if (S[0] != '1' && k > 0) {
          S[0] = '1';
          k--;
        }

        for (int i = 1; i < n; i++)
          if (S[i] != '0' && k > 0) {
            S[i] = '0';
            k--;
          }
      }
      cout << S << '\n';
    }
}
