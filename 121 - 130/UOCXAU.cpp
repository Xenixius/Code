#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("UOCXAU.INP", "r", stdin);
    freopen("UOCXAU.OUT", "w", stdout);
    string s; cin >> s;
    for (int i = 1; i <= s.length(); ++i)
        if (s.length() % i == 0) {
            string s1 = s.substr(0, i), s2 = s1;

            for (int j = 1; j < s.length() / i; ++j) s2 += s1;

            if (s2 == s) {
                cout << s1;
                return 0;
            }
        }
}