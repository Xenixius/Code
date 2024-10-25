#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("CVOLUME.INP", "r", stdin);
    freopen("CVOLUME.OUT", "w", stdout);

    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;
        int c = abs(a - b);
        int dem = c / 5 + (c % 5) / 2 + ((c % 5) % 2);
        cout << dem << '\n';
    }
}