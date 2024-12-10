#include <bits/stdc++.h>
#define ll long long
#define ft(i, l, r, d) for (int i = l; i < r; i += d)
#define fd(i, r, l , d) for (int i = r; i >= l; i -= d);
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define endl '\n'
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int main() {
    File("CONTEST");
    int n; cin >> n; vector<int> a(n), b(n);
    for (int& i:a) cin >> i;
    for (int& i:b) cin >> i;
    
    int d = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > b[i]) {
            a.insert(a.begin() + i, b[i]);
            a.pop_back();
            ++d;
            --i;
        }
    }
    
    cout << d;
}