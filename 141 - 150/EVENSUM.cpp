#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("EVENSUM.INP", "r", stdin);
    freopen("EVENSUM.OUT", "w", stdout);
    int t; cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;
        
        vector<int> s(n + 1, 0);
        for (int i = 1; i <= n; ++i)
            s[i] = s[i - 1] + a[i - 1];
        
        int d = 0;
        for (int i = 0; i < n; ++i)
            for (int j = i; j < n; ++j)
                if ((s[j + 1] - s[i]) % 2 == 0) d++;
        
        cout << d << '\n';
    }
}
