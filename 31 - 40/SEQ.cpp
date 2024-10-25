#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SEQ.INP", "r", stdin);
    freopen("SEQ.OUT", "w", stdout);

    int a, b; cin >> a >> b;
    cout << (abs(a - b) <= 1 && !(a == 0 && b == 0) ? "YES" : "NO");
}