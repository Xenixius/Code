// Horizon
#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("LEADERINARR.INP", "r", stdin);
    freopen("LEADERINARR.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto& i : a) cin >> i;
        
        vector<int> ld;
        int mx = a[n-1];
        ld.push_back(mx);
        
        for (int i = n-2; i >= 0; i--) {
            if (a[i] > mx) {
                ld.push_back(a[i]);
                mx = a[i];
            }
        }
        
        reverse(ld.begin(), ld.end());
        for (auto i : ld) cout << i << " ";
        cout << '\n';
    }
}
