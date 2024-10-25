#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("diff.inp", "r", stdin);
    freopen("diff.out", "w", stdout);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        
        int sum_min = 0, sum_max = 0;
        for (int i = 0; i < n - m; i++) {
            sum_min += a[i];
            sum_max += a[n - 1 - i];
        }
        
        cout << sum_max - sum_min << '\n';
    }

    return 0;
}
