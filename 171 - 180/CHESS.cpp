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
    File("CHESS");
    int n; cin >> n; vector<int> a(n), b(n);
    ft(i, 0, n, 1) cin >> a[i] >> b[i];
    sort(all(a)); sort(all(b));
    int ans = 0, t = b.size();
    while (b.size()) {
        int x = 0;
        ft(i, 0, t, 1) {
            if (b[i] > a[i]) x += 2;
            else if (b[i] == a[i]) x += 1;
        }
        ans = max(ans, x);
        b.erase(b.begin());
        t--;
    }
    cout << ans;
}