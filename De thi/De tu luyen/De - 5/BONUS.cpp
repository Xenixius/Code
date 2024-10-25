#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("BONUS.INP", "r", stdin);
    freopen("BONUS.OUT", "w", stdout);
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<long long> dp(n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i-1];
        if (i <= k) {
            dp[i] = max(dp[i], (long long)a[i-1]);
        } else {
            dp[i] = max(dp[i], dp[i-k] + a[i-1]); // Corrected index to i-k
        }
    }
    
    cout << dp[n] << endl;
    
    return 0;
}
