#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("FROG.INP", "r", stdin);
    freopen("FROG.OUT", "w", stdout);
    int n, m, k, kq = 0;
    cin >> m >> n >> k;
    int a[100000] = {0};
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;
            a[x]++;
        }
    sort(a, a + 100000, greater<int>());
    for (int i = 0; i < k; i++)
        kq += a[i];
    cout << kq;
}
