#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("ALARM.INP", "r", stdin);
    freopen("ALARM.OUT", "w", stdout);
    int h, m; cin >> h >> m;
    m -= 45;
    if (m < 0) {
        m += 60;
        h -= 1;
    }
    if (h < 0) h+= 24;
    cout << h << " " << m;
}