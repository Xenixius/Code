#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("PALINDNUM.INP", "r", stdin);
    freopen("PALINDNUM.OUT", "w", stdout);
    string n; cin >> n;
    string c = n;
    reverse(n.begin(), n.end());
    cout << (n == c ? "YES":"NO");
}