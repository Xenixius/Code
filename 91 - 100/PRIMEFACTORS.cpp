#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("PRIMEFACTORS.INP", "r", stdin);
    freopen("PRIMEFACTORS.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int mu = 0;
        for (int i = 2; i <= sqrt(n); i++) {
            mu = 0;
            while (n % i == 0) {
                mu++;
                n /= i;
            }
            if (mu != 0) cout << i << " " << mu << " ";
        }
        if (n > 1) cout << n << " 1 ";
        cout << '\n';
    }
    return 0;
}