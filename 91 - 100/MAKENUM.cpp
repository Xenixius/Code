#include <bits/stdc++.h>
#define int long long
using namespace std;

int kq(int n, vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int a = 0, b = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) a = a * 10 + arr[i];
        else b = b * 10 + arr[i];
    }
    return a + b;
}

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("MAKENUM.INP", "r", stdin);
    freopen("MAKENUM.OUT", "w", stdout);
    int T; cin >> T;
    while (T--) {
        int n; cin >> n;
        vector<int> arr(n);
        for (int& d:arr) cin >> d;
        cout << kq(n, arr) << '\n';
    }
}