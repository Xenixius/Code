#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("LCMS3_5.INP", "r", stdin);
    freopen("LCMS3_5.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << n/3 + n/5 - n/15 << '\n';
    }
}