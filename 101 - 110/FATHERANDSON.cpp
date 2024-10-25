#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("FATHERANDSON.INP", "r", stdin);
    freopen("FATHERANDSON.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int x, y; cin >> x >> y;
        cout << (x - 2*y >= 0 ? x - 2*y:-1) << '\n';
    }
}