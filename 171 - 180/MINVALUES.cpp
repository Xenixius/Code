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
    // File("MINVALUES");
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for (int& x : a) cin >> x;
    for (int i = 0; i <= n - k; i++) {
        int mn = *min_element(a.begin() + i, a.begin() + i + k);
        cout << mn << endl;
    }
}