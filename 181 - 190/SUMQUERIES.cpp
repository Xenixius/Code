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
    File("SUMQUERIES");
    int n, q; cin >> n >> q;
    vector<int> a(n), pre(n + 1, 0);
    for (int& x : a) cin >> x;
    ft(i, 0, n , 1) pre[i + 1] = pre[i] + a[i];
    while (q--) {
        int l, r; cin >> l >> r;
        cout << pre[r] - pre[l - 1] << endl;
    }
}