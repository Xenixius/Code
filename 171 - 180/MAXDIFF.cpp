#include <bits/stdc++.h>
#define ll long long
#define FOR(i, x, n, d) for (int i = (x); i < (n); i += (d))
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int main() {
    File("MAXDIFF");
    int n; 
    cin >> n;
    vector<int> a(n);
    for (auto& i : a) cin >> i;
    
    int MIN = *min_element(a.begin(), a.end());
    int MAX = *max_element(a.begin(), a.end());
    int d = MAX - MIN;
    
    ll d1 = count(a.begin(), a.end(), MIN);
    ll d2 = count(a.begin(), a.end(), MAX);
    
    ll kq;
    if (MIN == MAX) {
        kq = (ll)n * (n - 1) / 2;
    } else {
        kq = d1 * d2;
    }
    
    cout << d << ' ' << kq;
    
    return 0;
}