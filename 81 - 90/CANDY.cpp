#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("CANDY.INP", "r", stdin);
    freopen("CANDY.OUT", "w", stdout);

    ll n, k; cin >> n >> k;   
    ll c = 2 - 2*n - 2*k;
    ll delta = 1 - 4*c, p = (sqrt(delta) - 1) / 2;
    
    cout << n - p;
}