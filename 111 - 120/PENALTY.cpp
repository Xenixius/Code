#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("PENALTY.INP", "r", stdin);
    freopen("PENALTY.OUT", "w", stdout);
    int n, m = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        m += (x == 2 ? 1:-1);
    }
    cout << abs(m);
}
