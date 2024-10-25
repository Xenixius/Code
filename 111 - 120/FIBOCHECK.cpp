#include <bits/stdc++.h>
using namespace std;

int kq(int n) {
    if (n == 0) return 1;
    int a = 0, b = 1, d = 2;

    while (b <= n) {
        if (b == n) return d - 1;
        int next = a + b;
        a = b;
        b = next;
        d++;
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("FIBOCHECK.INP", "r", stdin);
    freopen("FIBOCHECK.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (kq(n) != -1) cout << kq(n) << '\n';
        else cout << "-1\n";
    }
}
