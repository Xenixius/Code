#include <bits/stdc++.h>
using namespace std;

int main () {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("MISSNUMS.INP", "r", stdin);
    freopen("MISSNUMS.OUT", "w", stdout);

    int T;
    cin >> T;

    vector<pair<int, int>> k;

    while (T--) {

        int da, db;
        cin >> da >> db;

        if (db == da) {
            da *=  10;
            db *= 10;
            db++;
            k.push_back(make_pair(da, db));
        } else if (db == da + 1) {
            k.push_back(make_pair(da, db));
        } else if (da == 9 && db == 1) {
            db *= 10;
            k.push_back(make_pair(da, db));
        } else {
            k.push_back(make_pair(-1, -1));
        }

    }

    for (int i = 0; i < k.size(); i++) {
        cout << k[i].first << " " << k[i].second << "\n";
    }

    return 0;
}