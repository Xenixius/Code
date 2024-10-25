#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("DISCRETESEQ.INP", "r", stdin);
    freopen("DISCRETESEQ.OUT", "w", stdout);
    int n, x, m = 1e4 + 1; cin >> n;
    vector<int> a(m, 0);
    for (int i = 0; i < n; i++) {
        cin >> x;
        a[x]++;
    }
    for (int i = 0; i < m; i++)
        if (a[i] > 0) cout << i << ":" << a[i] << '\n';
}
