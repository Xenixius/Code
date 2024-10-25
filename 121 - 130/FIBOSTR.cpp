#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("FIBOSTR.INP", "r", stdin);
    freopen("FIBOSTR.OUT", "w", stdout);
    string s1, s2; cin >> s1 >> s2; string f = s2 + s1;
    int n; cin >> n;
    if (n == 1) cout << s1;
    else if (n == 2) cout << s2;
    else if (n == 3) cout << f;
    else {
        while (n-- > 3) {
            s1 = s2;
            s2 = f;
            f = s2 + s1;
        }
        cout << f;
    }
}