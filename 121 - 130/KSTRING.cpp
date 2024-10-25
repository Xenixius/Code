#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("KSTRING.INP", "r", stdin);
    freopen("KSTRING.OUT", "w", stdout);
    int k; cin >> k;
    string s; cin >> s;
    map<char, int> m;
    for (char c : s) m[c]++;
    for (auto& p : m) {
        if (p.second % k != 0) {
            cout << -1;
            return 0;
        }
        p.second /= k;
    }
    string t;
    for (auto& p : m)
        for (int i = 0; i < p.second; i++) t += p.first;

    for (int i = 0; i < k; i++) cout << t;
}