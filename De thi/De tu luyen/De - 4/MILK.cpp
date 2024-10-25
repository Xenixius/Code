#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("MILK.INP", "r", stdin);
    freopen("MILK.OUT", "w", stdout);
  int x, y, m, q = 0; cin >> x >> y >> m;
  for (int i = 0; ; i++) {
    int s = x * i + ((m - x * i) / y) * y;
    if (s > m) break;
    if (q < s) q = s;
  }
  cout << q;
}