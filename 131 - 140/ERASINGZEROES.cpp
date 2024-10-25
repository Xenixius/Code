#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("ERASINGZEROES.INP", "r", stdin);
    freopen("ERASINGZEROES.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        string n; cin >> n; int d = 0;
        if (count(n.begin(), n.end(), '1') == 0) cout << "0\n";
        else {
            for (int i = n.find('1') + 1; i < n.rfind('1'); i++)
                if (n[i] == '0') ++d;
            cout << d << '\n';
        }
    }
}