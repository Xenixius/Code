#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("LONGEST.INP", "r", stdin);
    freopen("LONGEST.OUT", "w", stdout);
    int n, s;
    cin >> n >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    int l = 0, sum = 0, kq = 0;
    for (int r = 0; r < n; r++) {
        sum += a[r];
        while (sum > s && l <= r) { 
            sum -= a[l];
            l++;
        }
        kq = max(kq, r - l + 1);
    }
    cout << kq;
}