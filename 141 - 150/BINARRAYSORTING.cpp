// Horizon
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("BINARRAYSORTING.INP", "r", stdin);
    freopen("BINARRAYSORTING.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (auto& i:a) cin >> i;
        sort(a, a + n);
        for (auto i:a) cout << i << " ";
        cout << '\n';
    }
}