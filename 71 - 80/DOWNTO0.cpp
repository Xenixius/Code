#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("DOWNTO0.INP", "r", stdin);
    freopen("DOWNTO0.OUT", "w", stdout);

    int T; cin >> T;
    while (T--) {
        int a, b; cin >> a >> b;
        if (a < b) swap(a, b);
        if ((a + b) % 3 == 0 && 2*b >= a) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
}

