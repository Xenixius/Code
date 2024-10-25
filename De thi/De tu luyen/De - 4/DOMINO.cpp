#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("DOMINO.INP", "r", stdin);
    freopen("DOMINO.OUT", "w", stdout);
  int n, q = 0, p = 0; cin >> n; int a[n], b[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    q += a[i]; p += b[i];
  }
  if (q == p) cout << "0 0";
  else {
    int f = abs(q - p), d = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] != b[i]) {
        int k = abs(a[i] - b[i]);
        if (k <= f) {
          f -= k;
          d++;
        }
      }
      if (f == 0) break;
    }
    cout << f << " " << d;
  }
}