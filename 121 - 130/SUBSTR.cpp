#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SUBSTR.INP", "r", stdin);
    freopen("SUBSTR.OUT", "w", stdout);
    string X, Y;
    cin >> X >> Y;
    int n = X.size(), m = Y.size();
    for (int i = 0; i < n; i++) {
        bool f = 1;
        for (int j = 0; j < m; j++) 
            if (X[(i + j) % n] != Y[j]) {
                f = 0;
                break;
            }
        if (f) cout << i + 1 << " ";
    }
}