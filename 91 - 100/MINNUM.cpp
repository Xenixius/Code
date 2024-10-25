#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("MINNUM.INP", "r", stdin);
    freopen("MINNUM.OUT", "w", stdout);
    int T; cin >> T;
    while (T--) {
        int s, d; cin >> s >> d;
        if (s > 9 * d) {
            cout << -1 << '\n';
            continue;
        }
        string so(d, '0');
        for (int i = d - 1; i >= 0; --i) {
            so[i] = '0' + min(s, 9);
            s -= so[i] - '0';
        }
        if (so[0] == '0')
            for (int i = 1; i < d; ++i) 
                if (so[i] > '0') {
                    so[i]--;
                    so[0] = '1';
                    break;
                }
        cout << stoi(so) << '\n';
    }
    return 0;
}