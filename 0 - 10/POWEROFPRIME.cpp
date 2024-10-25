#include <bits/stdc++.h>
using namespace std;
long T, n, p, c;
int main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  freopen("POWEROFPRIME.INP", "r", stdin);
  freopen("POWEROFPRIME.OUT", "w", stdout);
  cin >> T;
  while (T--){
    cin >> n >> p;
    int c = 0;
    for (int i = p; i <= n; i *= p)
        c += n / i;
    cout << c << '\n';
  }
}
