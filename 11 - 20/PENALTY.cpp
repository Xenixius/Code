#include <bits/stdc++.h>
using namespace std;
long TC, t, q, l, rt, rq;
int main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  freopen("PENALTY.INP", "r", stdin);
  freopen("PENALTY.OUT", "w", stdout);
  cin >> TC;
  while (TC--){
    cin >> t >> q >> l;
    rq = 0, rt = 0;
    while (t && q && l > 1){
      if (t % l == 0) {rt++; t--;}
      else if (q % l == 0) {rq++; q--;}
      else l --;
    }
    cout << rt << " " << rq << '\n';
  }
}
