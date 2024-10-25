#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("STN.INP", "r", stdin);
    freopen("STN.OUT", "w", stdout);
    long long n; cin >> n;
    int m = log2(n);
    cout << m << '\n' << n - (1LL << m);
}
