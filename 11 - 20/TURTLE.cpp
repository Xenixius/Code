#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  freopen("TURTLE.INP", "r", stdin);
  freopen("TURTLE.OUT", "w", stdout);
  int a, b, s; cin >> a >> b >> s;
  ((s - abs(a) - abs(b)) % 2 == 0 && s >= abs(a) + abs(b)) ? cout  << "Yes": cout << "No";
}
