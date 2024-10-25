#include <bits/stdc++.h>
using namespace std;
long long t, n;
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("MESSAGE.INP", "r", stdin);
  freopen("MESSAGE.OUT", "w", stdout);
  for (cin >> t; t --;){
    cin >> n;
    cout << (n - 1)*2 << '\n';
  }
}
