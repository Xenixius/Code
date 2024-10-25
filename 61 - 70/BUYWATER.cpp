#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("BUYWATER.INP", "r", stdin);
    freopen("BUYWATER.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        long long n, a, b; cin >> n >> a >> b;
        if (b <= a * 2) 
            cout << (n / 2) * b + (n % 2) * a << '\n';
        else 
            cout << n * a << '\n';
        
    }
}