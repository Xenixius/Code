#include <bits/stdc++.h>
using namespace std;
long T, k, c;
int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  freopen("COUNTPAIRS.INP", "r", stdin);
  freopen("COUNTPAIRS.OUT", "w", stdout);
  cin >> T;
  while (T--){
    cin >> k;
    c = 0;
    for (int a = 1; a < k; ++a)
      if (k - a > a) c += k - 2*a;
    cout << c << '\n';
  }
}
