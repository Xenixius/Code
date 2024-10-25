#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("EXAM.INP", "r", stdin);
    freopen("EXAM.OUT", "w", stdout);
    long long n, k;
    cin >> n >> k;
    for (long long x = 0; x <= n; ++x) {
        long long e = k - 2 * x;
        long long z = n - x;
        if ((z > 0 && e >= 3 * z && e <= 5 * z) || (z == 0 && e == 0))
            return cout << x, 0;
    }
    cout << n;
}