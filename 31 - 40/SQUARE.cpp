#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SQUARE.INP", "r", stdin);
    freopen("SQUARE.OUT", "w", stdout);
    int x1, x2, y1, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if (y1 != y2 && x1 != x2) 
        cout << x1 << " " << y2 << " " << x2 << " " << y1;
    else if (y1 != y2 && x1 == x2)
        cout << x1 + abs(y1 - y2) << " " << y1 << " " << x2 + abs(y1 - y2) << " " << y2;
    else if (y1 == y2 && x1 != x2)
        cout << x1 << " " << y1 - abs(y1 - y2) << " " << x2 << y2 - abs(y1 - y2);
    else cout << -1;
}  