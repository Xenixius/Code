#include <bits/stdc++.h>
#define int long long
using namespace std;

bool P(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

pair<int, int> S(vector<int>& a) {
    int n = a.size(), ml = 0, ms = 0, cl = 1, cs = P(a[0]) ? a[0] : 0;
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i-1]) {
            cl++;
            cs += P(a[i]) ? a[i] : 0;
        } else {
            if (cl > ml || (cl == ml && cs > ms)) ml = cl, ms = cs;
            cl = 1, cs = P(a[i]) ? a[i] : 0;
        }
    }
    if (cl > ml || (cl == ml && cs > ms)) ml = cl, ms = cs;
    return {ml, ms};
}

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("LISMAXSUMPRIME.INP", "r", stdin);
    freopen("LISMAXSUMPRIME.OUT", "w", stdout);


    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (auto& i : a) cin >> i;
        auto [l, s] = S(a);
        cout << l << ' ' << s << '\n';
    }
}