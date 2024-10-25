#include <bits/stdc++.h>
using namespace std;

string kq(string a, string b, string c) {
    int n = a.size();
    for (int i = 0; i < n; ++i) 
        if (c[i] != a[i] && c[i] != b[i])
            return "NO";
    return "YES";
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("STRINGS.INP", "r", stdin);
    freopen("STRINGS.OUT", "w", stdout);
    int t; cin >> t;
    while(t--) {
        string a, b, c; cin >> a >> b >> c;
        cout << kq(a, b, c) << '\n';
    }
}
