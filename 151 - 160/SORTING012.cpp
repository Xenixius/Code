#include <bits/stdc++.h>
using namespace std;

void S(vector<int>& a) {
    int l = 0, m = 0, r = a.size() - 1;
    while (m <= r) {
        switch (a[m]) {
            case 0: swap(a[l++], a[m++]); break;
            case 1: m++; break;
            case 2: swap(a[m], a[r--]); break;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SORTING012.INP", "r", stdin);
    freopen("SORTING012.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int& x : a) cin >> x;
        S(a);
        for (int x : a) cout << x << ' ';
        cout << '\n';
    }
}
