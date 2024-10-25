// Horizon
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("PRODUCTOFSUMS.INP", "r", stdin);
    freopen("PRODUCTOFSUMS.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int p = 0, q = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            if (i < n/2) p += x;
            else q += x;
        }
        cout << p * q << '\n';
    }
}
}