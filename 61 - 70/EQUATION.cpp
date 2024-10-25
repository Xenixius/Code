#include <bits/stdc++.h>
using namespace std;

long long sum(long long n) {
    long long s = 0;
    while (n) s += n % 10, n /= 10;
    return s;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("EQUATION.INP", "r", stdin);
    freopen("EQUATION.OUT", "w", stdout);
    long long a;
    cin >> a;
    long long ans = -1;
    for (long long i = 1; i <= 72; ++i)
        if (a % i == 0) {
            long long x = a / i;
            if (x > 0 && sum(x) == i)
                ans = min(ans == -1 ? x : ans, x);
        }
    cout << ans;
    return 0;
}