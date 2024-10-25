#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("PYRAMID.INP", "r", stdin);
    freopen("PYRAMID.OUT", "w", stdout);
    int N; cin >> N;

    int h = 0, s = 0;

    for (int i = 1; ; ++i) {
        int t = i * (i + 1) / 2;
        if (s + t > N)
            break;
        s += t;
        h++;
    }

    cout << h;
    return 0;
}
