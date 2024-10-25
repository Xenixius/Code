#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("AREA.INP", "r", stdin);
    freopen("AREA.OUT", "w", stdout);
    int a, b, c; cin >> a >> b >> c;
    double h =  sqrt(c*c - ((b-a)/2.0)*((b-a)/2.0));
    cout << fixed << setprecision(2) << ((a + b)*h)/2 - (h/4 * h/4 * 3.14);
}