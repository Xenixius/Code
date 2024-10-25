#include <bits/stdc++.h>
#define int long long
using namespace std;

int solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto& x : a) cin >> x;

    int kq = 0, s = 0, f = 0;
    for (int x : a) {
        if (x < 0) {
            f = 1;
            s += x;
            kq = min(kq, s);
        } 
        else s = 0;
    }

    return f ? kq : 0;

}

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("MINSUMOFNEG.INP", "r", stdin);
    freopen("MINSUMOFNEG.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--) cout << solve() << '\n';
}