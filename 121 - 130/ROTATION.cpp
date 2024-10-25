#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("ROTATION.INP", "r", stdin);
    freopen("ROTATION.OUT", "w", stdout);
    string s; cin >> s; int n = s.size() - 1;
    cout << s << '\n';
    while (n--) {
        char c = s[0];
        s.erase(s.begin(), s.begin() + 1);
        s += c;
        cout << s << '\n';
    }
}