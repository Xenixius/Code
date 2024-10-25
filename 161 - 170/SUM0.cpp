#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SUM0.INP", "r", stdin);
    freopen("SUM0.OUT", "w", stdout);

    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    unordered_map<int, int> m;
    for(int i = 0; i < n; i++) {
        if(m.find(-a[i]) != m.end()) {
            cout << m[-a[i]] + 1 << " " << i + 1;
            return 0;
        }
        m[a[i]] = i;
    }
    
    cout << "-1 -1";
}