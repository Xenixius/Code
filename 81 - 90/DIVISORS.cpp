#include <bits/stdc++.h>
using namespace std;

int dem(long long n) {
    int d = 0;
    for (long long i = 1; i * i <= n; ++i) 
        if (n % i == 0) {
            d++;
            if (i != n / i) d++;
        }
    return d;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("DIVISORS.INP", "r", stdin);
    freopen("DIVISORS.OUT", "w", stdout);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<long long> A(n);
        for (int i = 0; i < n; ++i)
            cin >> A[i];

        long long gcd = A[0];
        for (int i = 1; i < n; ++i) 
            gcd = __gcd(gcd, A[i]);

        cout << dem(gcd) << '\n';
    }
    return 0;
}
