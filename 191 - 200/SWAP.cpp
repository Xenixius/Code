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

int F(int n, int x, int a, int b) {
    if (a > b) {
        swap(a, b);
    }
    
    int q = b - a,
    t = min(x, a - 1 + n - b),
    k = min(n - 1, q + t);
    
    return k;
}

int main() {
    File("SWAP");
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int n, x, a, b;
        cin >> n >> x >> a >> b;

        cout << F(n, x, a, b) << endl;
    }

    return 0;
}