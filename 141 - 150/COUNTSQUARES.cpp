// Horizon
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("COUNTSQUARES.INP", "r", stdin);
    freopen("COUNTSQUARES.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(1001, 0); bool f = 0;
        for (int i = 0; i < n; i++) {
            int x; cin >> x;
            a[x]++;
        }
        for (auto i:a) if (i >= 4) f = 1;
        if (!f) cout << "-1\n";
        else {
            for (int i = 1000; i > 0; i--)
                if (a[i] >= 4) {
                    cout << i * i << " " << a[i] / 4 << '\n';
                    break;
                }
        }
    }
}