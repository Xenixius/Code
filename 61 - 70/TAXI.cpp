#include<bits/stdc++.h>
using namespace std;

long long n, rs = 0, a[100009], dem[10], i, o = 0;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("TAXI.INP", "r", stdin);
    freopen("TAXI.OUT", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++) {
       cin >> a[i];
       dem[a[i]]++;
    }
    rs = dem[4];
    if (dem[3] <= dem[1]) {
        rs += dem[3];
        dem[1] -= dem[3];
        rs += (dem[2] / 2);
        if (dem[2] % 2 == 0)
            rs += (dem[1] + 3) / 4;
        else {
            rs += 1;
            dem[1] = max(o, dem[1] - 2);
            rs += (dem[1] + 3) / 4;
        }
        cout << rs;
    } 
    else {
        rs += dem[1];
        dem[3] -= dem[1];
        rs += ((dem[2] + 1) / 2);
        rs += dem[3];
        cout << rs;
    }
  return 0;
}