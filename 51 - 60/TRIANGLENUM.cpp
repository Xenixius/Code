#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("TRIANGLENUM.INP", "r", stdin);
    freopen("TRIANGLENUM.OUT", "w", stdout);
    int t; cin >> t;
    while(t--) {
        int a; cin >> a; a *= 2; 
        bool f = 0;
        for (int x = 1; x * (x + 1) <= a; x++) {
            int ans = a - x * (x + 1);
            double y = (-1 + sqrt(1 + 4*ans)) / 2;
            if (y == round(y) && y != 0) {
                cout << "YES\n";
                f = 1;
                break;
            }
        }
        if (!f) cout << "NO\n";
    }
    return 0;
}