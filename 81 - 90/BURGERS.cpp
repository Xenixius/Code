#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("BURGERS.INP", "r", stdin);
    freopen("BURGERS.OUT", "w", stdout);
    int q; cin >> q;

    while (q--) {
        int b, p, f; cin >> b >> p >> f;
        int h, c; cin >> h >> c;

        b /= 2;
        int t = 0;
        for (int j = 0; j <= b; j++) {
            int bo = min(j, p), ga = min(b - j, f);
            int t1 = bo * h + ga * c;
            t = max(t, t1);
        }

        cout << t << '\n';
    }
}