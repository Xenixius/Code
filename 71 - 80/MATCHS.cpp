#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("MATCHS.INP", "r", stdin);
    freopen("MATCHS.OUT", "w", stdout);
    
    int t; 
    cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n == 2) cout << "2\n";
        else cout << 2 * ((n + 1) / 2) - n << '\n';
    }
}
