#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("NUMBER.INP", "r", stdin);
    freopen("NUMBER.OUT", "w", stdout);
    int n, d = 0; cin >> n;
    while (n != 1) {
        if (n % 2 == 0) n /= 2;
        else n = n * 3 + 1;
        d++;
    }
    cout << d;
}