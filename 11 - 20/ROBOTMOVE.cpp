#include <bits/stdc++.h>
using namespace std;

int main(){
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
  freopen("ROBOTMOVE.INP", "r", stdin);
  freopen("ROBOTMOVE.OUT", "w", stdout);
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  if ((x1 <= x2 && y1 == y2) || (x1 == x2 && y1 <= y2) || (x1 >= x2 && y1 == y2) || (x1 == x2 && y1 >= y2)) cout << abs(x1 - x2) + abs(y1 - y2);
  if ((x1 > x2 && y1 < y2) || (x1 < x2 && y1 > y2) || (x1 > x2 && y1 > y2) || (x1 < x2 && y1 < y2)) cout << max(abs(x1 - x2), abs(y1 - y2));
}
