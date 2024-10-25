// Horizon
#include <bits/stdc++.h>
using namespace std;

int f(string s, int k) {
    int d = 0;
    for (auto c:s)
        if (c - '0' == k) d++;
    return d;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("FREQUENCYOFDIGIT.INP", "r", stdin);
    freopen("FREQUENCYOFDIGIT.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int n, k, d = 0; cin >> n >> k;
        vector<string> a(n);
        for (auto& i:a) {
            cin >> i;
            d += f(i, k);
        }
        cout << d << '\n';
    }
}