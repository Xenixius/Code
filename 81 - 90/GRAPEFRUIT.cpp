#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("GRAPEFRUIT.INP", "r", stdin);
    freopen("GRAPEFRUIT.OUT", "w", stdout);
    long long x, y, z;
    cin >> x >> y >> z;

    long long tong = (x / z) + (y / z);

    long long x1 = x % z;
    long long y1 = y % z;

    if (x1 + y1 < z) {
        cout << tong << " 0";
    } else {
        long long vay = min(z - x1, z - y1);
        cout << tong + 1 << " " << vay;
    }

    return 0;
}
