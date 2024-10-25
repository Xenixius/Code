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
    File("GOODELE");
    int n, d = 0; 
    cin >> n; 
    vector<int> a(n);
    for (int& i : a) cin >> i;

    int c = 0, l = 0;
    ft(i, 0, n, 1) {
        if (i % 2 == 0) c += a[i];
        else l += a[i];
    }

    int c1 = 0, c2 = 0;
    ft(i, 0, n, 1) {
        if (i % 2 == 0) {
            c -= a[i];
            if (c1 + l == c2 + c) d++;
            c1 += a[i];
        } else {
            l -= a[i];
            if (c1 + l == c2 + c) d++;
            c2 += a[i];
        }
    }

    cout << d << endl; 
    return 0;
}
