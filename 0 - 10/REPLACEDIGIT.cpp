#include <bits/stdc++.h>
using namespace std;
long long t, n;
vector<int> vec;
int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("REPLACEDIGIT.INP", "r", stdin);
  freopen("REPLACEDIGIT.OUT", "w", stdout);
  cin >> t;
  while (t--){
    vec.clear();
    cin >> n;
    if (n == 0) cout << "5";
    else while (n){
      vec.push_back(n % 10 == 0? 5 : n % 10);
      n /= 10;
    }
    for (int i = vec.size() - 1; i >= 0; -- i) cout << vec[i];
    cout << '\n';
  }
}
