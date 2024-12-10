// Horizon
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

int A(vector<pair<int, int>> a, vector<int> b) {
    int p = 0, d = 0;
    for (int i:b) {
        d += abs(a[i].first - p) + a[i].second;
        p = a[i].first;
    }
    return d;
}

int B(int n, int t, vector<pair<int, int>> a) {
    vector<int> v(n);
    ft(i, 0, n, 1) v[i] = i;

    int kq = 0;

    for (int j = 1; j < (1 << n); j++) {
        vector<int> b;
        ft(i, 0, n, 1)
            if (j & (1 << i)) 
                b.pb(i);

        int x0 = A(a, b);

        if (x0 <= t) kq = max(kq, (int)b.size());
    }

    return kq;
}

int main() {
    File("BIRTHDAY");
    int n, t; cin >> n >> t;

    vector<pair<int, int>> a(n);
    ft(i, 0, n, 1)
        cin >> a[i].first >> a[i].second;

    cout << B(n, t, a);
}
