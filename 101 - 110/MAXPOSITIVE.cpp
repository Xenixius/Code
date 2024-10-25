#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("MAXPOSITIVE.INP", "r", stdin);
    freopen("MAXPOSITIVE.OUT", "w", stdout);
    int T; cin >> T;

    while (T--) {
        double x; cin >> x;
        int N = 0; double A = 0.0;
        while (true) {
            N++;
            A += 1.0 / (2 * N - 1);
            if (A >= x) break;
        }
        cout << N << '\n';
    }
}