#include <bits/stdc++.h>
using namespace std;

int tong(int n) {
    int s = 0;
    while (n > 0) s += n % 10, n /= 10;
    return s;
}

bool snt(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}

int tts(int n) {
    int s = 0;
    for (int i = 2; i <= sqrt(n); i++)
        while (n % i == 0) s += tong(i), n /= i;
    if (n > 1) s += tong(n);
    return s;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SMITHNUM.INP", "r", stdin);
    freopen("SMITHNUM.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (snt(n)) cout << "0\n";
        else if (tong(n) == tts(n)) cout << "1\n";
        else cout << "0\n";
    }
}