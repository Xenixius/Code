#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("APROG.INP", "r", stdin);
    freopen("APROG.OUT", "w", stdout);
    int a, b, c, d, e; cin >> a >> b >> c;
    e = min(min(a, b), min(b, c));
    d = min(min(abs(b - a), abs(c - b)), min(abs(c - b), abs(c - a)));
    cout << 4 * e + 6 * d - a - b - c;
    return 0;
}