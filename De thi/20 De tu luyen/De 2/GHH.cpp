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

int Uoc(int x) {
    int s = 0;
    for (int i = 1; i * i <= x; ++i) 
        if (x % i == 0) {
            s += i;
            if (i != x / i) s += x / i;
        }
    return s;
}

int main() {
    File("GHH");
    int n; cin >> n;

    vector<int> a(n); for (int& i:a) cin >> i;

    for (int i:a) 
        cout << (i*2 <= Uoc(i) ? "1\n":"0\n");
}
