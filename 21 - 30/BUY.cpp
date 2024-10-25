#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("BUY.INP", "r", stdin);
  freopen("BUY.OUT", "w", stdout);
  int n, a, b;
  cin >> n >> a >> b;
  for (int i = 0; i <= n / a; i++)
    if ((n - a * i) % b == 0) {cout << "YES\n" << i << " " << (n - a * i) / b; return 0;}
  cout << "NO";
  return 0;
}
