#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("BUFFALOS.INP", "r", stdin);
    freopen("BUFFALOS.OUT", "w", stdout);
    int T; cin >> T;
    while (T--) {
        int x, y; cin >> x >> y;
        vector<vector<int>> v;

        for (int a = 0; a <= x; ++a) 
            for (int b = 0; b <= x - a; ++b) {
                int c = x - a - b;
                if (c % 3 == 0 && 5 * a + 3 * b + c / 3 == y)
                    v.push_back({a, b, c});
            }

        cout << v.size() << '\n';
        for (auto i:v) cout << i[0] << " " << i[1] << " " << i[2] << '\n';
    }
}