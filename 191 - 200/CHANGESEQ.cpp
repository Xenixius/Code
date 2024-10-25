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

string F(vector<int>& a, vector<int>& b, int n) {
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        v[i] = b[i] - a[i];
    }

    int l = -1, r = -1;
    for (int i = 0; i < n; i++) {
        if (v[i] != 0) {
            if (l == -1) {
                l = i;
            }
            r = i;
        }
    }

    if (l == -1) return "YES";

    int k = v[l];
    if (k <= 0) return "NO";

    for (int i = l; i <= r; i++) {
        if (v[i] != k) return "NO";
    }

    return "YES";
}

int main() {
    File("CHANGESEQ");
    int T;
    cin >> T;
    vector<string> s;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        s.push_back(F(a, b, n));
    }

    for (string& i : s) {
        cout << i << endl;
    }

    return 0;
}