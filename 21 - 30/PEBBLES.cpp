#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("PEBBLES.INP", "r", stdin);
    freopen("PEBBLES.OUT", "w", stdout);
    int n, k;
    cin >> n >> k;
    int w[n];
    for(auto& i:w) cin >> i;
    int count = 0;
    for(auto i:w)
      if(i <= k) count++;
      else
      {
          count += i/k;
          if (i % k != 0) count++;
      }
    if(count % 2 != 0) cout << count/2+1;
    else cout << count/2;
}
