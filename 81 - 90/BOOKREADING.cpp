#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("BOOKREADING.INP", "r", stdin);
    freopen("BOOKREADING.OUT", "w", stdout);
    int t;
    cin>>t;
    while (t--) {
        ll n,m;
        cin>>n>>m;
        ll l=m%10;
        vector<ll> a;
        vector<bool> ok(10,false);
        for (ll i=1;;++i) {
            ll d=(i*l)%10;
            if (ok[d]) break;
            ok[d]=true;
            a.push_back(d);
        }
        ll c=0;
        for (ll d:a) {
            c+=d;
        }
        ll k=n/m;
        ll f=k/a.size();
        ll r=k%a.size();
        ll tong=f*c;
        for (ll i=0;i<r;++i) {
            tong+=a[i];
        }
        cout<<tong<<'\n';
    }
    return 0;
}