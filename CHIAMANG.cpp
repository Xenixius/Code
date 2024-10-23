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
    File("CHIAMANG");
    int n; cin >> n;
    vector<int> a(n), pre(n+1, 0);
    
    ft(i, 0, n, 1) cin >> a[i];
    
    ft(i, 1, n+1, 1) pre[i] = pre[i-1] + a[i-1];

    ft(i, 1, n+1, 1) {
        if (pre[i-1] == pre[n] - pre[i]) {
            cout << i;
            return 0;
        }
    }

    cout << -1;
}
