#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("LONGWORD.INP", "r", stdin);
    freopen("LONGWORD.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        if (s.size() <= 10) {
            for (char c : s) cout << (char)tolower(c);
            cout << '\n';
        }
        else cout << (char)tolower(s[0]) << s.size() - 2 << (char)tolower(s[s.size() - 1]) << '\n';
    }
}
