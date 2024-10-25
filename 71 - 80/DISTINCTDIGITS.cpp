#include <bits/stdc++.h>
using namespace std;

bool khac(int n) {
    string s = to_string(n);
    for (auto i:s)
        if (count(s.begin(), s.end(), i) != 1) return 0;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("DISTINCTDIGITS.INP", "r", stdin);
    freopen("DISTINCTDIGITS.OUT", "w", stdout);
    int l, r; cin >> l >> r; bool f = 0;
    for (int i = l; i <= r; i++)
        if (khac(i)) { cout << i; f = 1; break; }
    if (!f) cout << -1;
}