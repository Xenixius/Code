#include <bits/stdc++.h>
#define int long long
using namespace std;

bool cmp(const pair<string, int>& a, const pair<string, int>& b) {
    if (a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("FANS.INP", "r", stdin);
    freopen("FANS.OUT", "w", stdout);

    int n, t;
    cin >> n >> t;
    
    vector<pair<string, int>> fans(n);
    for (auto& f : fans) cin >> f.first >> f.second;
    
    sort(fans.begin(), fans.end(), cmp);
    
    for (int i = 0; i < t; i++) cout << fans[i].first << '\n';
}