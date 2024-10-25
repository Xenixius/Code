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
    File("SEQ");
    int n; cin >> n; vector<int> a(n); for (int& i:a) cin >> i;
    sort(all(a));
    ll x = a[n-1] * a[n-2] * a[n-3], y = a[n-1] * a[0] * a[1];
    cout << max(x, y);
}