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
    File("LATXU");
    int n; cin >> n; vector<int> a(n + 1);
    ft(i, 1, n + 1, 1) cin >> a[i];
    ftf(i, 2, n, 2) {
        if (a[i] != a[i-1])
            ftf(j, 1, i-1, 1)
                if (a[j] != a[i])
                    a[j] = 1 - a[j];
    }
    cout << count(all(a), 0) - 1;
}
