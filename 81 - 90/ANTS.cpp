#include <bits/stdc++.h>
using namespace std;

int kq(int x1, int x2, int x3, int d) {
    int a[] = {x1, x2, x3};
    sort(a, a + 3);
    x1 = a[0]; x2 = a[1]; x3 = a[2];

    int d1 = x2 - x1, d2 = x3 - x2, t = 0;

    if (d1 < d) t += d - d1;
    if (d2 < d) t += d - d2;

    return t;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("ANTS.INP", "r", stdin);
    freopen("ANTS.OUT", "w", stdout);
    int q; cin >> q;
    while (q--) {
        int x1, x2, x3, d; cin >> x1 >> x2 >> x3 >> d;
        cout << kq(x1, x2, x3, d) << '\n';
    }
}