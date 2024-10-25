#include <bits/stdc++.h>
using namespace std;
int T, n;
int res(int n){
  int res = 0;
  while (n != 0){
    res += n % 10;
    n /= 10;
  }
  return res;
}
int rep(int n){
  int sum = res(n);
  return (sum < 10) ?  sum:rep(sum);
}
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("DIGITS.INP", "r", stdin);
  freopen("DIGITS.OUT", "w", stdout);
  cin >> T;
  while (--T >= 0){
    cin >> n;
    cout << rep(n) << '\n';
  }
  return 0;
}
