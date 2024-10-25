#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("BEAUTIFULNUM.INP", "r", stdin);
    freopen("BEAUTIFULNUM.OUT", "w", stdout);
    int n, k; cin >> n >> k;
    string a; cin >> a;

    string b = a.substr(0, k);

    string y = b;
    while (y.size() < n) y += b;
    y = y.substr(0, n);

    if (y >= a) cout << n << '\n' << y;
    else {
        int i = k - 1;
        while (i >= 0 && b[i] == '9') {
            b[i] = '0';
            i--;
        }
        if (i >= 0) b[i]++;
        
        y = b;
        while (y.size() < n) y += b;
        y = y.substr(0, n);

        cout << n << '\n' << y;
    }
}
