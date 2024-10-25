#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("POWER.INP", "r", stdin);
    freopen("POWER.OUT", "w", stdout);

    int n;
    cin >> n;
    vector<int> a(n), b(n);
    
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
    
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end());
    
    bool can_win = true;
    for (int i = 0; i < n; i++) {
        if (a[i] <= b[i]) {
            can_win = false;
            break;
        }
    }
    
    cout << (can_win ? "Yes" : "No") << '\n';
}