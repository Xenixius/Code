#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("ALIBABA.INP", "r", stdin);
    freopen("ALIBABA.OUT", "w", stdout);
    int n; cin >> n; int a[n];
    for (auto& i:a) cin >> i;
    sort(a, a + n, greater<int>());
    long long sum = 0;
    for (auto i:a) sum += i;
    if (sum % 2 != 0)
        for (int i = n - 1; i >= 0; i--)
            if (a[i] % 2 != 0) {
                sum -= a[i];
                break;
            }
    cout << sum;
}