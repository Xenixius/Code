#include <bits/stdc++.h>
using namespace std;

bool kt(int x, int y) {
    if (x == 1)
        return y == 1;
    else if (x == 2 || x == 3)
        return y < 4;
    else
        return true;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("MAGICSTICK.INP", "r", stdin);
    freopen("MAGICSTICK.OUT", "w", stdout);
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int x, y;
        cin >> x >> y;
        if (kt(x, y)) 
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

