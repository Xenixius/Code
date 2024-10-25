#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("SACH.INP", "r", stdin);
    freopen("SACH.OUT", "w", stdout);
    int n, x, max = 0;
    cin >> n;
    map<int, int> a;

    for (int i = 0; i < n; i++) {
        cin >> x;
        a[x]++;
    }

    for (auto& i : a) 
        if (i.second > max) max = i.second;

    for (auto& i : a)
        if (i.second == max) {
            cout << i.first << " " << max;
            break;
        }

    return 0;
}