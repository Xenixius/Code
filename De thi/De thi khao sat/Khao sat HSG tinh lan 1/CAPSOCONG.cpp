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

int main() {
    File("CAPSOCONG");
    int n, m; cin >> n >> m;
    while (n--) {
        vector<ll> a(m), v; for (ll& i:a) cin >> i;
        fdf(i, m - 1, 1, 1) v.pb(a[i] - a[i - 1]);
        if (count(all(v), v[0]) == m - 1) cout << v[0] << endl;
        else cout << "*\n";
    }
}