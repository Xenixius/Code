#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("CANDIES.INP", "r", stdin);
    freopen("CANDIES.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int a[4];
        cin >> a[0] >> a[1] >> a[2] >> a[3];
        sort(a, a + 4);
        cout << (a[0] + a[3] == a[1] + a[2] ? "YES\n":"NO\n");
    }
}