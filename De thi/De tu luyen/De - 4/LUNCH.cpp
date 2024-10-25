#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("LUNCH.INP", "r", stdin);
    freopen("LUNCH.OUT", "w", stdout);
    int n, m, q = LLONG_MAX, fq = 0,  sq = 0, l = 0; cin >> n >> m; int f[n], s[n];
    for (int i = 0; i < n; i++) cin >> f[i] >> s[i];

    for (int i = 0; i < n; i++) {
        fq += f[i];
        sq = max(sq, s[i]);
        
        while (fq >= m) {
            q = min(q, sq);
            fq -= f[l];
            l++;
            sq = 0;
            for (int j = l; j <= i; j++)
                sq = max(sq, s[j]);
        }
    }
    
    cout << q;
}
