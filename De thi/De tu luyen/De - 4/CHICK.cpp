#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  freopen("CHICK.INP", "r", stdin);
  freopen("CHICK.OUT", "w", stdout);
  int n; cin >> n;
  map<int, int> xm, ym;
  map<pair<int, int>, int> v;
  for (int i = 0; i < n; i++) {
    int x, y; cin >> x >> y;
    xm[x]++;
    ym[y]++;
    v[{x, y}]++;
  }
  int d = 0;
  for (auto& i:xm) {
    int k = i.second;
    d += k * (k - 1) / 2;
  }
  for (auto& i:ym) {
    int k = i.second;
    d += k * (k - 1) / 2;
  }
  for (auto& i:v) {
    int k = i.second;
    d -= k * (k - 1) / 2;
  }
  cout << d;
}