#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("COUNTDIV.INP", "r", stdin);
    freopen("COUNTDIV.OUT", "w", stdout);

    int T, L, R, a, b;
    cin >> T;
    while (T--) {
        cin >> L >> R >> a >> b;
        int count = 0;
        count += (R / a) - (L - 1) / a;
        count += (R / b) - (L - 1) / b;
        count -= (R / (a * b / __gcd(a, b))) - (L - 1) / (a * b / __gcd(a, b));
        cout << count << '\n';
    }
}
