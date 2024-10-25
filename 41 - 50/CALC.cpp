#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("CALC.INP", "r", stdin);
    freopen("CALC.OUT", "w", stdout);
    int n; cin >> n;
    cout << (n % 2 == 0 ? n/2:n/2 - n);
}