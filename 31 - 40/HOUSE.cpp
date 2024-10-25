#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("HOUSE.INP", "r", stdin);
    freopen("HOUSE.OUT", "w", stdout);
    int n, a, count = 0;
    cin >> n >> a;
    cout << ((a % 2 == 0) ? (n - a)/2 + 1:(a - 1)/2 + 1);
}