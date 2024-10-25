#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n+1), pref(n+1, 0);
    
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i-1] + a[i];
    }
    
    for (int i = 1; i <= n; i++) {
        if (pref[i-1] == pref[n] - pref[i]) {
            cout << i << '\n';
            return;
        }
    }
    
    cout << -1 << '\n';
}

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("EQUIPOSITION.INP", "r", stdin);
    freopen("EQUIPOSITION.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--) solve();
}
