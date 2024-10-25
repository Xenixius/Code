#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("SCHEDULE.INP", "r", stdin);
  freopen("SCHEDULE.OUT", "w", stdout);
  int t, n, x = 0;
  cin >> t;

  for (int i = 0; i < t; ++i){
    cin >> n >> x;
    x >= 10 ? cout << "0 \n": cout << (n - 1)*10 - (n - 1)*x << '\n';
  }
  return 0;
}
