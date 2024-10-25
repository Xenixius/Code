#include <bits/stdc++.h>
using namespace std;
long long t, n, b;
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("PARITY.INP", "r", stdin);
  freopen("PARITY.OUT", "w", stdout);
  cin >> t;
  for (t; t > 0; -- t){
    b = 0;
    cin >> n;
    while(n!=0) {
      b += n % 2;
      n /= 2;
    }
    cout << ((b % 2 == 0) ? b :b) << "\n";
  }
}
