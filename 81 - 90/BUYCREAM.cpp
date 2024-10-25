#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("BUYCREAM.INP", "r", stdin);
    freopen("BUYCREAM.OUT", "w", stdout);
    int t, n, s, tt; 
    cin >> t;
    while (t--) {
        cin >> n >> s >> tt;
        cout << n - min(s, tt) + 1 << '\n';
    }
    return 0;
}