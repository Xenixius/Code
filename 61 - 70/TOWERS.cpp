#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("TOWERS.INP", "r", stdin);
    freopen("TOWERS.OUT", "w", stdout);
    int n; long long khoi = 0;
    cin >> n;
    while (n > 0) khoi += (n*(n + 1))/2, n--;
    cout << khoi;
}