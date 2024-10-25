#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("THESECONDELE.INP", "r", stdin);
    freopen("THESECONDELE.OUT", "w", stdout);
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    cout << a[n - 2];
}