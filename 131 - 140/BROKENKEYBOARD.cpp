#include <bits/stdc++.h>
using namespace std;

string kq(string s, string t) {
    int i = 0, j = 0;
    while (j < t.size()) {
        if (i < s.size() && s[i] == t[j]) {
            i++;
            j++;
        } else if (j > 0 && t[j] == t[j - 1])
            j++;
        else return "NO\n";
    }
    return (i == s.size()) ? "YES\n" : "NO\n";
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("BROKENKEYBOARD.INP", "r", stdin);
    freopen("BROKENKEYBOARD.OUT", "w", stdout);
    int q; cin >> q;
    while (q--) {
        string s, t; cin >> s >> t;
        cout << kq(s, t);
    }
    return 0;
}
