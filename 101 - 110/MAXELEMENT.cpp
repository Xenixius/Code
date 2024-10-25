#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("MAXELEMENT.INP", "r", stdin);
    freopen("MAXELEMENT.OUT", "w", stdout);
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    cout << *max_element(a.begin(), a.end());
}