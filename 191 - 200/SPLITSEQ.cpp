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
    File("SPLITSEQ");
    int q; 
    cin >> q;

    while (q--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n); 
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> l;
        for (int i = 0; i < n; i++)
            if (a[i] % 2 == 1)
                l.push_back(i + 1);  

        if (l.size() < k || (l.size() - k) % 2 == 1)
            cout << "NO\n";
        else {
            cout << "YES\n";
            for (int i = 0; i < k - 1; i++)
                cout << l[i] << " ";
            cout << n << endl;
        }
    }

    return 0;
}
