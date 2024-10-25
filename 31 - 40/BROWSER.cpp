#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("BROWSER.INP", "r", stdin);
    freopen("BROWSER.OUT", "w", stdout);
    int N, P, L, R;
    cin >> N >> P >> L >> R;
    if (L == 1 && R == N) {
        cout << 0;
    } else if (L == 1 || R == N) {
        cout << abs(P - (L == 1 ? R : L)) + 1;
    } else {
        int sec = min(abs(P - L), abs(P - R)) + 1;
        P = abs(P - L) < abs(P - R) ? L : R;
        if ((P == L && R < N) || (P == R && L > 1)) sec += R - L + 1;
        cout << sec;
    }
    return 0;
}