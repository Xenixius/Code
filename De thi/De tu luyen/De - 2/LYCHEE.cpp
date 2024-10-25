#include <bits/stdc++.h>
using namespace std;

long long kc(vector<int> a, int n, int h, int k) {
    long long sum = 0;
    for (int i = n - h; i <= n; i++) {
        if (i < 0) i = 0;
        sum += a[i];
    }
    for (int i = n + h; i >= n; i--) {
        if (i >= a.size()) i = a.size() - 1;
        sum += a[i];
    }
    return sum;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("LYCHEE.INP", "r", stdin);
    freopen("LYCHEE.OUT", "w", stdout);
    long long n, k , h; cin >> n >> k >> h;
    vector<int> a(n*k, 0);
    for (int i = 0; i < n*k; i+=k) cin >> a[i];
    long long max = -1;
    for (int i = 0; i < n*k; i++) {
        long long kq = kc(a, i, h, k);
        if (max < kq) max = kq;
    }
    cout << max;
}
