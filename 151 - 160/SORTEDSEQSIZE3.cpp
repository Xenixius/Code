#include <bits/stdc++.h>
using namespace std;

void S() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    
    int mn1 = INT_MAX, mn2 = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        if (a[i] <= mn1) {
            mn1 = a[i];w
        } else if (a[i] <= mn2) {
            mn2 = a[i];
        } else {
            cout << "YES\n";
            return;
        }
    }
    
    cout << "NO\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    freopen("SORTEDSEQSIZE3.INP", "r", stdin);
    freopen("SORTEDSEQSIZE3.OUT", "w", stdout);
    
    int t;
    cin >> t;
    while (t--) S();
    
    return 0;
}
