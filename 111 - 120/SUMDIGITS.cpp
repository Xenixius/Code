#include <bits/stdc++.h>
using namespace std;

int tong(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SUMDIGITS.INP", "r", stdin);
    freopen("SUMDIGITS.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int n, d = 0; cin >> n;
        for (int i = 1000; i <= 9999; i++)
            if (tong(i) == n) d++;
        cout << d << '\n';
    }
}