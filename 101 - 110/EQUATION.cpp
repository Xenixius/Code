#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("EQUATION.INP", "r", stdin);
    freopen("EQUATION.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int a, b, k, d = 0; cin >> a >> b >> k;
        vector<pair<int, int>> v;
        for (int x = -10; x <= 10; x++)
            for (int y = -10; y <= 10; y++)
                if (a*x + b*y == k) {
                    d++;
                    v.push_back({x, y});
                }
        cout << d << '\n';
        for (auto i:v)
            cout << i.first << " " << i.second << '\n';
    }
}