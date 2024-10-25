#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  freopen("ROUNDING.INP", "r", stdin);
  freopen("ROUNDING.OUT", "w", stdout);
  int n; cin >> n;
  cout << (n % 10 > 5 ? n + (10 - n % 10) : n - n % 10);
}
