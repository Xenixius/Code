#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("GARDEN.INP", "r", stdin);
  freopen("GARDEN.OUT", "w", stdout);
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector <int> x(k);
    for (int i = 0; i < k; i ++) cin >> x[i];

    int count = x[0];
    for (int i = 1; i < k; i++)
      count = max(count, (x[i] - x[i - 1] + 2) / 2);
    count = max(count, n - x[k - 1] + 1);
    cout << count << '\n';
  }
}
