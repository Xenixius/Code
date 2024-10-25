#include <bits/stdc++.h>
#define int long long
using namespace std;

int func(int n) {
    if (n < 10) return n;
    int ans = n / 10 + 9, c = n;
    while (c >= 10) c /= 10;
    if (c > (n % 10)) ans--;
    return ans;
}

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("DEMSO.INP", "r", stdin);
    freopen("DEMSO.OUT", "w", stdout);
    int l, r; cin >> l >> r;
    cout << func(r) - func(l - 1);
}