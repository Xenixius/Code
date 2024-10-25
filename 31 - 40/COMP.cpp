#include <bits/stdc++.h>
using namespace std;

bool Prime(int n) {
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("COMP.INP", "r", stdin);
    freopen("COMP.OUT", "w", stdout);
    int n; cin >> n;
    for (int i = 4; i <= n / 2; i++)
        if (Prime(i) && Prime(n - i)) {cout << i << " " << n - i; break;}
    return 0;
}