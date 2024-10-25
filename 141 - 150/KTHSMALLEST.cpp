// Horizon
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("KTHSMALLEST.INP", "r", stdin);
    freopen("KTHSMALLEST.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n;
        int a[n];
        for (auto& i:a) cin >> i;
        cin >> k;
        sort(a, a + n);
        cout << a[k - 1] << '\n';
    }
}