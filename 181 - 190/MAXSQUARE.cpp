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
    File("MAXSQUARE");
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n; 
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        vector<int> d(n + 1, 0);
        for (int i = 0; i < n; i++) {
            if (a[i] <= n) {
                d[a[i]]++;
            }
        }

        int s = 0, kq = 0;
        for (int k = n; k >= 1; k--) {
            s += d[k];
            if (s >= k) {
                kq = k;
                break;
            }
        }

        cout << kq << endl;
    }
    return 0;
}