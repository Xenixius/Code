#include <bits/stdc++.h>
using namespace std;

int tong_uoc(int n) {
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++) 
        if (n % i == 0) {
            sum += i;
            if (i != n / i) sum += n / i;
        }
    return sum;
}

int tong_uoc2(int n) {
    vector<int> u;
    for (int i = 1; i <= n; i++) if (n % i == 0) u.push_back(i);

    int sum = 0;
    for (int d : u) sum += tong_uoc(d);
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SUMDIVISORS.INP", "r", stdin);
    freopen("SUMDIVISORS.OUT", "w", stdout);

    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        cout << tong_uoc2(n) << '\n';
    }
    return 0;
}