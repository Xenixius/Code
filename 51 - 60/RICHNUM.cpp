#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("RICHNUM.INP", "r", stdin);
    freopen("RICHNUM.OUT", "w", stdout);
    long long n, sum = 1; cin >> n;
    for (long long i = 2; i * i < n; i++) {
        if (n % i == 0) {
            sum += i;
            if (i * i != n) sum += n / i;
        }
    }
    cout << (sum > n ? 1:0);
}