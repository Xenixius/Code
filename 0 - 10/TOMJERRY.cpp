#include <bits/stdc++.h>

using namespace std;
long long t,a[100001];
int main()
{
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("TOMJERRY.INP", "r", stdin);
  freopen("TOMJERRY.OUT", "w", stdout);
    cin >> t;
    for (int i= 1;i <= t; ++i)
        cin >> a[i];
    for (int i = 1;i <= t; ++i)
        if (a[i] % 2 == 0) cout << "1" << '\n';
        else cout << "0" << '\n';
}
