#include <bits/stdc++.h>
#define ll long long
#define ft(i, l, r, d) for (int i = l; i < r; i += d)
#define fd(i, r, l, d) for (int i = r; i > l; i -= d)
#define ftf(i, l, r, d) for (int i = l; i <= r; i += d)
#define fdf(i, r, l, d) for (int i = r; i >= l; i -= d)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define endl '\n'
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

ll modulo(ll base, ll exp, ll mod) {
    ll kq = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1) {
            kq = (kq * base) % mod;
        }
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return kq;
}

int main() {
    File("BAI01");
    ll a, b, n, m;
    const ll MOD = 1e9;

    cin >> a >> b >> n >> m;

    ll an = modulo(a, n, MOD),
    bm = modulo(b, m, MOD),
    kq = an + bm;

    cout << kq;

    return 0;
}
