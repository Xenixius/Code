// Horizon
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("COUNTPAIRS.INP", "r", stdin);
    freopen("COUNTPAIRS.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int n, d = 0; cin >> n;
        int a[n];
        for (auto& i:a) cin >> i;
        
        for (int i = 0; i < n; i++)
            for (int j = i + 1; j < n; j++)
                if (i * a[i] > j * a[j]) d++;
        cout << d << '\n';
    }
}