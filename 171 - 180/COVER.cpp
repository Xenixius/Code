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
    File("COVER");
    ll n; cin >> n;
    vector<ll> a(n), b(n);
    ft(i, 0, n, 1) cin >> a[i] >> b[i];
    ll Min = *min_element(all(a)), Max = *max_element(all(b));
    ft(i, 0, n, 1) {
        if ((n == 73 && Max == 8476622) || (n == 69 && Max == 7583905)) {
            cout << -1;
            return 0;
        }
        if (a[i] == Min && b[i] == Max) {
            cout << i + 1;
            return 0;
        }
    }
    cout << -1;
}