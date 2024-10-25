#include <bits/stdc++.h>
using namespace std;

bool kt(int n) {
    int dem = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        int mu = 0;
        while (n % i == 0) {
            mu++;
            if (mu == 2) return 0;
            dem++;
            if (dem > 3) return 0;
            n /= i;
        }
    }
    if (n > 1) dem++;
    return (dem == 3);
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SPHENICNUM.INP", "r", stdin);
    freopen("SPHENICNUM.OUT", "w", stdout);
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        if (kt(n)) cout << "1\n";
        else cout << "0\n";
    }
}