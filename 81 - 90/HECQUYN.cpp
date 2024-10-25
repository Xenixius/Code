#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("HECQUYN.INP", "r", stdin);
    freopen("HECQUYN.OUT", "w", stdout);

    int t;
    cin >> t;
    vector<int> r;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<pair<int, int>> a;
        int m = 0;

        for (int j = 0; j < n; j++) {
            int d, h;
            cin >> d >> h;
            a.push_back({d, h});
            m = max(m, d);
        }

        if (m >= x) {
            r.push_back(1);
        } else {
            int md = 0;
            for (const auto& p : a) {
                md = max(md, p.first - p.second);
            }

            if (md <= 0) {
                r.push_back(-1);
            } else {
                int rh = x - m;
                int ma = (rh + md - 1) / md + 1;
                r.push_back(ma);
            }
        }
    }

    for (const auto& i : r) {
        cout << i << '\n';
    }

    return 0;
}