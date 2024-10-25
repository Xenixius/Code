#include <bits/stdc++.h>
#define int long long
using namespace std;

void S() {
    int n;
    cin >> n;
    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];
    
    int mh = 0, d = 0;
    
    for (int i = 0; i < n; i++)
        if (h[i] >= mh) {
            d++;
            mh = h[i];
        }
    
    cout << d << '\n';
}

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("BUILDINGS.INP", "r", stdin);
    freopen("BUILDINGS.OUT", "w", stdout);

    int t;
    cin >> t;
    while (t--) S();
}