#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  freopen("WATER.INP", "r", stdin);
  freopen("WATER.OUT", "w", stdout);
  int T;
  cin >> T;
  while (T--) {
    int n;
    cin >> n;
    vector <pair<int, int>> v(n);
    for (auto & [L, R]: v) {
      cin >> L >> R;
    }
    int time = 0;
    for (auto & [L, R]: v) {
      time = max(time, L);
      cout << (R < time ? 0 : time++) << " ";
    }
    cout << '\n';
  }
  return 0;
}
