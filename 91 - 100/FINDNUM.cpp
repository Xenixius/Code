#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return 0;
    return 1;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("FINDNUM.INP", "r", stdin);
    freopen("FINDNUM.OUT", "w", stdout);

    int t; cin >> t;
    while (t--) {
        int a, b, i = 1; cin >> a >> b;
        long long c = a + b;
        while (!prime(c + i)) i++;
        cout << i << '\n';
    }
}