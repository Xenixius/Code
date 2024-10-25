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

int main() {
    File("BALANCED");
    int n; cin >> n;
    int a[n];
    for (int& i:a) cin >> i;
    sort(a, a + n);
    ll ans = 0, l = 0;
    ft(r, 0, n, 1) {
        while (a[r] - a[l] > 5) l++;
        ans = max(ans, r - l + 1);
    }
    cout << ans;
}