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

vector<int> F(int n, int m, vector<int> t) {
    vector<int> kq;
    
    for (int i = 0; i < n; i++) {
        int x = accumulate(t.begin(), t.begin() + i, 0);  
        int y = t[i];
        if (x + y <= m) {
            kq.push_back(0);
        } else {
            vector<int> v(t.begin(), t.begin() + i);
            sort(v.rbegin(), v.rend());
            
            int d = 0;
            for (int time : v) {
                x -= time;
                d++;
                if (x + y <= m) {
                    break;
                }
            }
            kq.push_back(d);
        }
    }
    
    return kq;
}

int main() {
    File("EXAM");
    int n, m;
    cin >> n >> m;
    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    
    vector<int> a = F(n, m, t);
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
