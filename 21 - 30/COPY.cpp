#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  freopen("COPY.INP", "r", stdin);
  freopen("COPY.OUT", "w", stdout);
  int x, y;
  cin >> x >> y;

  if (y == 0 || (x - y + 1) % 2 || x - y + 1 < 0)
    cout << "No";
  else if (y == 1 && x != 0)
    cout << "No";
  else
    cout << "Yes";
}
