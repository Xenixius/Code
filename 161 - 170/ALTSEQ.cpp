#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve(vector<int>& a) {
    int n = a.size();
    vector<int> v;
    
    sort(a.rbegin(), a.rend());
    
    int l = 0, r = n - 1;
    while (l <= r) {
        v.push_back(a[l++]);
        if (l <= r) v.push_back(a[r--]);
    }
    
    for (int i : v) cout << i << " ";
    cout << "\n";
}

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("LEADERLNARR.INP", "r", stdin);
    freopen("LEADERLNARR.OUT", "w", stdout);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (auto& i : a) cin >> i;
        solve(a);
    }
}
