#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("DOICOSO.INP", "r", stdin);
    freopen("DOICOSO.OUT", "w", stdout);
    int o, n, i = 0, ans = 0; cin >> o >> n;
    if (o == 2) {
        while (n > 0) {
            if (n % 10 == 1) ans += pow(2, i);
            i++;
            n /= 10;
        }
        cout << ans;
    }
    else if (o == 10) {
        vector<int> a;
        while (n > 0) {
            a.push_back(n % 2);
            n /= 2;
        }
        for (int i = a.size() - 1; i >= 0; i--) cout << a[i];
    }
}