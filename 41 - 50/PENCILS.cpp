#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("PENCILS.INP", "r", stdin);
    freopen("PENCILS.OUT", "w", stdout);
    int n, m, ngay = 0, i = 2; cin >> n >> m; int temp = m;
    while (n > 0) {
        n--;
        ngay++;
        if (ngay == temp) {n ++; temp = m * i; i++;}
    }
    cout << ngay;
}