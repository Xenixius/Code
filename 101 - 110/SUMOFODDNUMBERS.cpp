#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SUMOFODDNUMBERS.INP", "r", stdin);
    freopen("SUMOFODDNUMBERS.OUT", "w", stdout);
    int n, s = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        if (x % 2 != 0) s += x;
    }
    cout << s;
}