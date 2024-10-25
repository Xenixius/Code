#include <bits/stdc++.h>
using namespace std;

bool check(int h, int m) {
    while (h > 0) {
        if (h % 10 == 7) return true;
        h /= 10;
    }
    while (m > 0) {
        if (m % 10 == 7) return true;
        m /= 10;
    }
    return false;
}

int func(int x, int h, int m) {
    int count = 0;
    while (!check(h, m)) {
        m -= x;
        if (m < 0) {
            m += 60;
            h -= 1;
        }
        if (h < 0) h += 24;
        count += 1;
    }
    return count;
}

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  freopen("ALARM.INP", "r", stdin);
  freopen("ALARM.OUT", "w", stdout);
    int x;
    cin >> x;
    int h, m;
    cin >> h >> m;
    cout << func(x, h, m) << '\n';
    return 0;
}

