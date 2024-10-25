#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SUMS.INP", "r", stdin);
    freopen("SUMS.OUT", "w", stdout);
    int n, s, d = 0; cin >> n >> s;
    vector<int> a(n), pre(n + 1, 0);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) pre[i + 1] = pre[i] + a[i];

    for (int len = 3; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int kq = pre[i + len] - pre[i];
            if (kq == s) d++;
        }
    }
    cout << d;
}