// Horizon
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("CHOCOLATES.INP", "r", stdin);
    freopen("CHOCOLATES.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (auto& i:a) cin >> i;
        cout << *min_element(a, a + n) << '\n';
    }
}