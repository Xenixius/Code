// Horizon
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("MINSUMOFPRODUCT.INP", "r", stdin);
    freopen("MINSUMOFPRODUCT.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        ll n, s = 0; cin >> n;
        ll a[n], b[n];
        for (auto& i:a) cin >> i;
        for (auto& i:b) cin >> i;
        sort(a, a+n); sort(b, b+n, greater<ll>());
        for (int i = 0; i < n; i++) s += a[i] * b[i];
        cout << s << '\n';
    }
}