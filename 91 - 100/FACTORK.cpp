#include <bits/stdc++.h>
using namespace std;

vector<int> kq(int n) {
    vector<int> a;
    for (int i = 2; i * i <= n; ++i)
        while (n % i == 0) {
            a.push_back(i);
            n /= i;
        }
    if (n > 1) a.push_back(n);
    return a;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("FACTORK.INP", "r", stdin);
    freopen("FACTORK.OUT", "w", stdout);
    int T; cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        vector<int> a = kq(n);
        if (k > a.size()) 
            cout << -1 << '\n';
        else 
            cout << a[k - 1] << '\n';
    }
}