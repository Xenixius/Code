#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("UNIQUECHAR.INP", "r", stdin);
    freopen("UNIQUECHAR.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s; bool f = 0;
        for (auto c:s) {
            if (count(s.begin(), s.end(), c) == 1) {
                size_t i = s.find(c);
                cout << i + 1 << '\n';
                f = 1;
                break;
            }
        }
        if (!f) cout << "-1\n";
    }
    return 0;
}