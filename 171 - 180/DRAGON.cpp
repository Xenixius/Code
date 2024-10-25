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
    File("DRAGON");
    int s, n;
    cin >> s >> n;
    
    vector<pair<int, int>> a(n);
    ft(i, 0, n, 1) cin >> a[i].first >> a[i].second;
    
    sort(a.begin(), a.end());
    
    ft(i, 0, n, 1) {
        if (s > a[i].first) {
            s += a[i].second;
        } else {
            cout << "NO\n" << n - i;
            return 0;
        }
    }
    
    cout << "YES";
    return 0;
}