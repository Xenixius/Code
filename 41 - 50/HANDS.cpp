#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("HANDS.INP", "r", stdin);
    freopen("HANDS.OUT", "w", stdout);
    int n; cin >> n;
    cout << (n * (n - 1))/2;
}