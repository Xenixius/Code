#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("BUYMILK.INP", "r", stdin);
    freopen("BUYMILK.OUT", "w", stdout);
    long long n, a, b, c; cin >> n >> a >> b >> c;
    if (b > n) cout << n / a;
    else cout << max(n / a, (n - c) / (b - c) + (n - (n - c) / (b - c) * (b - c)) / a);
}