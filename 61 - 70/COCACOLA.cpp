#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("COCACOLA.INP", "r", stdin);
    freopen("COCACOLA.OUT", "w", stdout);
    int a, b, c, dem = 0, du = 0;
    cin >> a >> b >> c;
    a += b;
    while (a + du >= c) {
        a += du;
        dem += a/c;
        du = a % c; a /= c; 
    }
    cout << dem;
}