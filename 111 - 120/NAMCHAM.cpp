#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("NAMCHAM.INP", "r", stdin);
    freopen("NAMCHAM.OUT", "w", stdout);
    int n, d = 0; cin >> n;
    vector<string> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++)
        if (a[i] != a[i + 1]) d++;
        cout << d;
}