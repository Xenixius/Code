#include <bits/stdc++.h>
using namespace std;

bool snt(long long n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}

long long tt(long long n) {
    long long x;
    for (int i = 2; i <= sqrt(n); i++) 
        while (n % i == 0) x = i, n /= i;
    if (n > 1) x = n;
    return x;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("LARGESTFACTOR.INP", "r", stdin);
    freopen("LARGESTFACTOR.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        long long n; cin >> n;
        if (snt(n)) cout << n << '\n';
        else cout << tt(n) << '\n';
    }
    return 0;
}