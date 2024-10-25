#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("GROUPS.INP", "r", stdin);
    freopen("GROUPS.OUT", "w", stdout);
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        vector<int> a(n);
        for (auto& i : a) cin >> i;
        sort(a.begin(), a.end());
        int nhom = 1;
        for (int i = 0; i < n - 1; i++)
            if (abs(a[i] - a[i + 1]) == 1) {
                    nhom = 2;
                    break;
            }
        cout << nhom << '\n';
    }
    return 0;
}