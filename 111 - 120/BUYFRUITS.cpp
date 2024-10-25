#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("BUYFRUITS.INP", "r", stdin);
    freopen("BUYFRUITS.OUT", "w", stdout);
    int n, m; cin >> n >> m;
    double s = LLONG_MAX, a, b;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        s = min(s, a/b);
    }
    cout << fixed << setprecision(8) << s*m;
}