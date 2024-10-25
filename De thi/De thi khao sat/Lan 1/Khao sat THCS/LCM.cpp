#include <bits/stdc++.h>
#define ll long long
#define ft(i, l, r, d) for (int i = l; i < r; i += d)
#define fd(i, r, l, d) for (int i = r; i >= l; i -= d);
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define endl '\n'
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b;
}

pair<int, int> F(int l, int r) {
    if (l * (l + 1) <= r) return {l, l + 1};
    else if (2 * l <= r) return {l, 2 * l};
    else return {-1, -1};
}

int main() {
    File("LCM");
    int t; cin >> t;
    while (t--) {
        int l, r; cin >> l >> r;
        pair<int, int> kq = F(l, r);

        if (kq.first == -1) cout << "-1 - 1\n";
        else cout << kq.first << " " << kq.second << '\n';
    }
}