#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("DICE.INP", "r", stdin);
  freopen("DICE.OUT", "w", stdout);
  int T, n = 0;
  for (cin >> T; T > 0; T --){
    cin >> n;
    cout << 7 - n << '\n';
  }
}
