#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SMAX.INP", "r", stdin);
    freopen("SMAX.OUT", "w", stdout);
    ll n; cin >> n; ll m = 0;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];

    ll s = 0;
    for (ll i = 0; i < n; i++) {
        s = max(a[i], s + a[i]);
        m = max(m, s);
    }

    cout << m;
}