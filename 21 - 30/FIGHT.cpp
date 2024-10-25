#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  freopen("FIGHT.INP", "r", stdin);
  freopen("FIGHT.OUT", "w", stdout);
  long Ht, At, Dt, Hy, Ay, Dy, h, a, d, res = 1e9;
  cin >> Ht >> At >> Dt >> Hy >> Ay >> Dy >> h >> a >> d;

  for (long i = Dt; i <= 100; ++i)
    for (long j = At; j <= 200; ++j) {
      long t_A = max(j - Dy, 0L);
      if (t_A) {
        long time = (Hy + t_A - 1) / t_A;
        res = min(res, (i - Dt) * d + (j - At) * a + max(time * max(Ay - i, 0L) - Ht + 1, 0L) * h);
      }
    } 

  cout << res;
  return 0;
}
