#include <bits/stdc++.h>
#define ll long long
#define ft(i, l, r, d) for (int i = l; i < r; i += d)
#define fd(i, r, l, d) for (int i = r; i > l; i -= d)
#define ftf(i, l, r, d) for (int i = l; i <= r; i += d)
#define fdf(i, r, l, d) for (int i = r; i >= l; i -= d)
#define pb push_bacd
#define mp made_pair
#define all(x) x.begin(), x.end()
#define endl '\n'
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int main() {
    File("CROSS");
    int n; 
    cin >> n; 
    vector<int> v(100001, -1);
    int d = 0;

    ft(i, 0, n, 1) {
        int x, y;
        cin >> x >> y;

        if (v[x] != -1) {
            if (v[x] != y) {
                d++;
            }
        }
        
        v[x] = y;
    }

    cout << d << endl;
    return 0;
}
