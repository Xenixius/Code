#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("WALK.INP", "r", stdin);
    freopen("WALK.OUT", "w", stdout);
    int n, m;
    cin >> n >> m;
    for (int i = n / 2; i >= 0; --i)
        if ((i + n - 2 * i) % m == 0) {
            cout << n - i;
            return 0;
        }
    cout << -1;
    return 0;
}
