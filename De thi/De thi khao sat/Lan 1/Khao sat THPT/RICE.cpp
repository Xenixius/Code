#include <bits/stdc++.h>
#define ll long long
#define ft(i, l, r, d) for (int i = l; i < r; i += d)
#define fd(i, r, l, d) for (int i = r; i >= l; i -= d);
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define endl '\n'
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;
ll sqr(ll a) {return a*a;}
int main() {
    File("RICE");
    ll n, m, x, y, r; cin >> n >> m >> x >> y >> r;
    vector<ll> a(n), b(m);
    for (ll& i:a) cin >> i;
    for (ll& i:b) cin >> i;
    ll bom = 0;
    for (ll i : a)
        for (ll j : b)
            if (sqr(x - i) + sqr(y - j) > sqr(r)) 
                bom++;
    cout << abs(bom - (n*m - bom));
}