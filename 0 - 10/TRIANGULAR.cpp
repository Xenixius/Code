#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("TRIANGULAR.INP", "r", stdin);
  freopen("TRIANGULAR.OUT", "w", stdout);
  int t, n, j = 0;
  cin >> t;
  for (int i = 0; i < t; ++i){
    cin >> n;
    for (j = 1; j * (j + 1) / 2 < n; ++j);
    cout << (j * (j + 1) / 2 == n ? "1\n" : "0\n");
  }
}
