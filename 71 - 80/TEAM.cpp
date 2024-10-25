#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("TEAM.INP", "r", stdin);
    freopen("TEAM.OUT", "w", stdout);

    int T; cin >> T;
    while (T--) {
        int s, b, n; cin >> s >> b >> n;
        cout << min(min(s, b), ((s + b + n) / 3)) << '\n';
    }
}
