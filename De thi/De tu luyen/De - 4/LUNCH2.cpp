#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("LUNCH.INP", "r", stdin);
    freopen("LUNCH.OUT", "w", stdout);
  int n, m, fq, sq, q = LLONG_MAX; cin >> n >> m;
  int f[n], s[n];
  for (int i = 0; i < n; i++) cin >> f[i] >> s[i];
  
  for (int i = 0; i < n; i++) {
    fq = sq = 0;
    for (int j = i; fq < m; j++)  {
      fq += f[j]; sq = max(sq, s[j]);
      if (fq == m) {
        q = min(q, sq);
        break;
      }
    }
  }
  cout << q;
}
