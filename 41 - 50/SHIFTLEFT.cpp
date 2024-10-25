#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SHIFTLEFT.INP", "r", stdin);
    freopen("SHIFTLEFT.OUT", "w", stdout);
    int n, k; cin >> n >> k; long long s = n, i = 10;
    while (k--) {
        s += n*i;
        i *= 10;
    }
    cout << s << endl;
}