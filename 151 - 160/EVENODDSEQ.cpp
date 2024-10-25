#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> even, odd;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x % 2 == 0) even.push_back(x);
        else odd.push_back(x);
    }
    
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    
    for (int x : even) cout << x << " ";
    for (int x : odd) cout << x << " ";
    cout << "\n";
}

main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    freopen("EVENODDSEQ.INP", "r", stdin);
    freopen("EVENODDSEQ.OUT", "w", stdout);
    
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
