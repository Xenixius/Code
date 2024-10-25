#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("WATER.INP", "r", stdin);
    freopen("WATER.OUT", "w", stdout);
    int n, k, min = 1e9, i; cin >> n >> k;
    while(n--) {cin >> i; if (k % i == 0) if (min > k/i) min = k/i;}
    cout << min;
}