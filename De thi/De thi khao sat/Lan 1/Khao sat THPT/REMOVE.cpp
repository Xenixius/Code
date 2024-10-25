#include <bits/stdc++.h>
#define ll long long
#define ft(i, l, r, d) for (int i = l; i < r; i += d)
#define fd(i, r, l, d) for (int i = r; i >= l; i -= d)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define endl '\n'
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int main() {
    File("REMOVE");
    int n; cin >> n;
    vector<int> a(n), b(n);
    
    for (int& i:a) cin >> i;
    for (int& i:b) cin >> i;

    vector<ll> pa(n + 1, 0), sb(n + 1, 0);
    ft(i, 0, n, 1)
        pa[i + 1] = pa[i] + a[i];
    fd(i, n - 1, 0, 1)
        sb[i] = sb[i + 1] + b[i];

    ll ans = 0, x0 = 0, y0 = 0;
    for (int x = 0; x <= n; x++) {
        for (int y = 0; y <= n - x; y++) {
            ll p = 0;
            for (int i = x; i < n - y; i++)
                p += (ll)a[i] * b[n - 1 - (i - x) - y];
            if (p > ans) {
                ans = p;
                x0 = x;
                y0 = y;
            }
        }
    }

    cout << x0 << " " << y0 << '\n' << ans;
}