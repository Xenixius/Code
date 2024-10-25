#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("DRINKS.INP", "r", stdin);
    freopen("DRINKS.OUT", "w", stdout);
    int n; double s = 0; cin >> n;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        s += x;
    }
    s /= n;
    cout << fixed << setprecision(3) << s;
}