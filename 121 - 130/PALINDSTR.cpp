#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("PALINDSTR.INP", "r", stdin);
    freopen("PALINDSTR.OUT", "w", stdout);
    int n; string s; cin >> n; cin >> s;
    int kq = 0;
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++) {
            int l = i, r = j;
            while (l < r && s[l] == s[r]) l++, r--;
            if (l >= r) kq = max(kq, j - i + 1);
        }
    cout << kq;
}