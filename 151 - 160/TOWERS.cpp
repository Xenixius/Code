#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("TOWERS.INP", "r", stdin);
    freopen("TOWERS.OUT", "w", stdout);
    
    int n;
    cin >> n;
    
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    
    map<int, int> d;
    for(int x : a) d[x]++;
    
    int mh = 0, nt = 0;
    
    for(auto p : d) {
        if(p.second > mh) mh = p.second;
        nt++;
    }
    
    cout << mh << " " << nt << '\n';
}
