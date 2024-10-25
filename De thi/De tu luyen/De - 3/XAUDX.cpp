#include <bits/stdc++.h>
using namespace std;

int dxlt(const string& s) {
    int n = s.size();
    if (n == 0) return 0;

    vector<vector<bool>> dp(n, vector<bool>(n, false));
    int m = 1;

    for (int i = 0; i < n; i++) dp[i][i] = true;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            dp[i][i + 1] = true;
            m = 2;
        }
    }

    for (int l = 3; l <= n; l++) {
        for (int i = 0; i < n - l + 1; i++) {
            int j = i + l - 1;
            if (s[i] == s[j] && dp[i + 1][j - 1]) {
                dp[i][j] = true;
                m = l;
            }
        }
    }

    return m;
}

int dxbk(const string& s) {
    int n = s.size();
    if (n == 0) return 0;

    vector<vector<int>> dp(n, vector<int>(n, 0));

    for (int i = 0; i < n; i++) dp[i][i] = 1;

    for (int l = 2; l <= n; l++) {
        for (int i = 0; i < n - l + 1; i++) {
            int j = i + l - 1;
            if (s[i] == s[j]) {
                dp[i][j] = dp[i + 1][j - 1] + 2;
            } else {
                dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[0][n - 1];
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("XAUDX.INP", "r", stdin);
    freopen("XAUDX.OUT", "w", stdout);
    string s;
    getline(cin, s);

    int d = count(s.begin(), s.end(), ' ');
    if (s.empty()) {
        cout << d << '\n' << d;
        return 0;
    }

    int a = dxlt(s);
    int b = dxbk(s);

    cout << a << endl << b;

    return 0;
}