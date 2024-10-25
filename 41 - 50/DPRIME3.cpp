#include <bits/stdc++.h>

using namespace std;
bool check(long long n) {
  for (long long i = 2; i <= sqrt(n); ++i)
    if (n % i == 0) return false;
  return n > 1;
}
long long n;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("DPRIME3.INP", "r", stdin);
    freopen("DPRIME3.OUT", "w", stdout);
  cin >> n;
  if (n < 13) cout << "-1";
  else {
    long long x = 2;
    for (long long y = 3; y <= sqrt(n); ++y)
      if (check(y)) {
        long long z = 4 + y * y;
        if (check(z)) cout << x << " " << y << " " << z << '\n';
      }
  }
}