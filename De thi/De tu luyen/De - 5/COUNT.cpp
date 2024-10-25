#include <bits/stdc++.h>
using namespace std;

bool snt(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    // ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    // freopen("COUNT.INP", "r", stdin);
    // freopen("COUNT.OUT", "w", stdout);
    int t, d = 0; cin >> t;
    while (t--) {
        int x1, y1, x2, y2, kq; cin >> x1 >> y1 >> x2 >> y2;
        if (y1 == y2) kq = abs(x2 - x1);
        else if (x1 == x2) kq = abs(y2 - y1);
        else kq = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        if (snt(kq)) d++;
    }
    cout << d;
}