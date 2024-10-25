#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("APM.INP", "r", stdin);
    freopen("APM.OUT", "w", stdout);
    int n, m = 0; cin >> n;
    while ((1 << m) <= n) m++;
    cout << m - 1 << " " << n - (1 << m - 1);
}