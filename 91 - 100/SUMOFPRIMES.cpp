#include <bits/stdc++.h>
using namespace std;

bool dx(int n) {
    string s = to_string(n);
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

int a[100001];
void sang() {
    memset(a, 1, sizeof(a));
    a[0] = a[1] = 0;
    for (int i = 2; i <= sqrt(100000); i++) 
        if (a[i]) 
            for (int j = i * i; j <= 100000; j += i) 
                a[j] = 0;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SUMOFPRIMES.INP", "r", stdin);
    freopen("SUMOFPRIMES.OUT", "w", stdout);
    int t; cin >> t;
    sang();
    while (t--) {
        int l, r; cin >> l >> r; long long tong = 0;
        for (int i = l; i <= r; i++)
            if (dx(i) && a[i]) tong += i;
        cout << tong << '\n';
    }
}