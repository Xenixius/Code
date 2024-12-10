#include <bits/stdc++.h>
#define ll long long
#define ft(i, l, r, d) for (int i = l; i < r; i += d)
#define fd(i, r, l, d) for (int i = r; i > l; i -= d)
#define ftf(i, l, r, d) for (int i = l; i <= r; i += d)
#define fdf(i, r, l, d) for (int i = r; i >= l; i -= d)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define endl '\n'
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int main() {
    File("BAI04");
    int n, k; cin >> n >> k;
    k--; vector<int> a(n);
    
    for (int& i:a) cin >> i;

    vector<ll> dp(n + 2, LLONG_MAX);
    dp[0] = 0;

    ftf(i, 1, n + 1, 1)
        ft(j, max(0, i - k - 1), i, 1)
            if (i <= n)
                dp[i] = min(dp[i], dp[j] + a[i - 1]);
            else
                dp[i] = min(dp[i], dp[j]);

    cout << dp[n + 1];
}
