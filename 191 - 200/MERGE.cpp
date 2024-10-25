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


int f(int n, vector<int>& a) {
    vector<int> v(3, 0);

    for (int i : a) v[i % 3]++;

    int MAX = v[0];

    int p = min(v[1], v[2]);
    MAX += p;
    v[1] -= p;
    v[2] -= p;

    MAX += v[1] / 3;
    MAX += v[2] / 3;

    return MAX;
}

int main() {
    File("MERGE");
    int q;
    cin >> q;
    
    while (q--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        cout << f(n, a) << endl;
    }
    
    return 0;
}
