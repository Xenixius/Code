#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("MONEY.INP", "r", stdin);
    freopen("MONEY.OUT", "w", stdout);
    int q;
    cin >> q;
    while (q--) {
        int a, b, n, S;
        cin >> a >> b >> n >> S;
        int m = min(S / n, a);
        int res = S - m * n;
        if (res <= b) cout << "YES\n";
        else cout << "NO\n";
    }
}
