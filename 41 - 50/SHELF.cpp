#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SHELF.INP", "r", stdin);
    freopen("SHELF.OUT", "w", stdout);
    int a[3], b[3], n; double tonga = 0, tongb = 0;
    for (int i = 0; i < 3; i++) cin >> a[i], tonga += a[i];
    for (int i = 0; i < 3; i++) cin >> b[i], tongb += b[i];
    cin >> n;
    cout << (n - ceil(tonga / 5) - ceil(tongb / 10) >= 0 ? "YES" : "NO");
}