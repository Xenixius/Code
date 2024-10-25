#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("BSTONE.INP", "r", stdin);
    freopen("BSTONE.OUT", "w", stdout);
    long long n, s = LLONG_MAX; cin >> n;
    for (int i = 1; i <= sqrt(n); i++)
        if (n % i == 0) s = min(s, (i + n/i)*2);
    cout << s;
}