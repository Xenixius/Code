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
    File("BOOKSEXCHANGE");
    int q; 
    cin >> q;
    
    while (q--) {
        int n;
        cin >> n;
        
        vector<int> p(n + 1), kq(n + 1, 0);
        
        for (int i = 1; i <= n; i++) {
            cin >> p[i];
        }
        
        for (int i = 1; i <= n; i++) {
            if (kq[i] == 0) {
                int j = i;
                int d = 0;
                
                vector<int> v;
                while (kq[j] == 0) {
                    v.push_back(j);
                    kq[j] = -1;
                    j = p[j];
                    d++;
                }

                for (int k : v) {
                    kq[k] = d;
                }
            }
        }
        
        for (int i = 1; i <= n; i++) {
            cout << kq[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}