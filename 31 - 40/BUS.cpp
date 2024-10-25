#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("BUS.INP", "r", stdin);
    freopen("BUS.OUT", "w", stdout);
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    cout << min(n*a,(n/m)*b+min((n%m)*a,b));
}