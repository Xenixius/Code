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
    File("TUNNEL");
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    vector<int> c(n+1);
    for(int i = 0; i < n; i++) {
        c[b[i]] = i;
    }
    
    int d = 0, m = -1;
    
    for(int i = 0; i < n; i++) {
        if(c[a[i]] > m) {
            m = c[a[i]];
        } else {
            d++;
        }
    }
    
    cout << d << endl;
    
    return 0;
}