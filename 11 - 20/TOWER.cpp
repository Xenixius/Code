#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  freopen("TOWER.INP", "r", stdin);
  freopen("TOWER.OUT", "w", stdout);
  int a, i = 1;
  cin >> a;
  while (true){
    string s = to_string(a + i);
    for (auto c:s) if (c == '8') {cout << i; return 0;}
    ++i;
  }
}
