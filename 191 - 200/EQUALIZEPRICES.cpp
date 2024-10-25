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

int main() {
    File("EQUALIZEPRICES");
    int q;
    cin >> q;

    while (q--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        int L_max = a[0] - k, R_min = a[0] + k;

        for (int i = 1; i < n; i++) {
            L_max = max(L_max, a[i] - k);
            R_min = min(R_min, a[i] + k);
        }

        if (L_max <= R_min) cout << R_min << endl;
        else cout << "-1\n";
    }

    return 0;
}
