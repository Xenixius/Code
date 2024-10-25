#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("GAME.INP", "r", stdin);
    freopen("GAME.OUT", "w", stdout);
    long long T, x, y, n;
    cin >> T;
    while (T--) {
        cin >> x >> y >> n;
        if (n % 2 == 1) {
            x *= 2;
        }
        cout << 1LL * max(x, y) / min(x, y) << '\n';
    }
}
