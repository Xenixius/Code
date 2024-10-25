#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("CHINHPHUONG.INP", "r", stdin);
    freopen("CHINHPHUONG.OUT", "w", stdout);
    int n, sum = 0; cin >> n;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    cout << (sqrt(sum) == round(sqrt(sum)) ? "YES":"NO");
}