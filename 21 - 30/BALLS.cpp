#include <bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  freopen("BALLS.INP", "r", stdin);
  freopen("BALLS.OUT", "w", stdout);
  long long  A, B, X, Y, Z; cin >> A >> B >> X >> Y >> Z;
  cout << max(0LL, 2*X + Y - A) + max(0LL, 3*Z + Y - B);
}
