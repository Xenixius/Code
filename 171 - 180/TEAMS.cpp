#include <bits/stdc++.h>
#define ll long long
#define ft(i, l, r, d) for (int i = l; i < r; i += d)
#define fd(i, r, l, d) for (int i = r; i >= l; i -= d)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define endl '\n'
#define vt vector<int>
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int main() {
    File("TEAMS");
    int n; cin >> n; int a[n]; for (int& i:a) cin >> i;
    vt m, p, s;
    ft(i, 0, n, 1) {
        if (a[i] == 1) m.pb(i + 1);
        else if (a[i] == 2) p.pb(i + 1);
        else s.pb(i + 1);
    }
    if (m.size() == 0 || p.size() == 0 || s.size() == 0) cout << 0;
    else {
        int i = 0;
        while (i < m.size() && i < p.size() && i < s.size()) {
            cout << m[i] << " " << p[i] << " " << s[i] << endl;
            i++;
        }
    }
}