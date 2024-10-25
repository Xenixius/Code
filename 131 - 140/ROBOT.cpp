#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("ROBOT.INP", "r", stdin);
    freopen("ROBOT.OUT", "w", stdout);
    int q; cin >> q;
    vector<string> a;

    while (q--) {
        string s; cin >> s;
        int L = count(s.begin(), s.end(), 'L'),
        R = count(s.begin(), s.end(), 'R'),
        U = count(s.begin(), s.end(), 'U'),
        D = count(s.begin(), s.end(), 'D'),
        x = min(L, R), 
        y = min(U, D);

        if (x == 0 && y == 0) a.push_back("0\n\n");
        else if (x == 0) a.push_back("2\nUD\n");
        else if (y == 0) a.push_back("2\nRL\n");
        else {
            string s = to_string(2 * (x + y)) + "\n" +
                            string(x, 'R') + string(y, 'U') + string(x, 'L') + string(y, 'D') + "\n";
            a.push_back(s);
        }
    }

    for (auto i:a) cout << i;
}
