#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("TONG.INP", "r", stdin);
    freopen("TONG.OUT", "w", stdout);
    ll p, q, du = 0; cin >> p; vector<int> a(p);
    for (int i = 0; i < p; i++) cin >> a[i];

    cin >> q; vector<int> b(q);
    for (int i = 0; i < q; i++) cin >> b[i];
    vector<int> kq;
    while (p != 0 || q != 0) {
        int ans;
        if (p != 0 && q != 0) {
            ans = a[p - 1] + b[q - 1] + du;
            p--;
            q--;
        } else if (p != 0) {
            ans = a[p - 1] + du;
            p--;
        } else {
            ans = b[q - 1] + du;
            q--;
        }

        if (ans >= 10) {
            du = 1;
            kq.push_back(ans - 10);
        } else {
            du = 0;
            kq.push_back(ans);
        }
    }

    if (du != 0) {
        kq.push_back(du);
    }

    cout << kq.size() << '\n';
    for (int i = kq.size() - 1; i >= 0; i--) cout << kq[i] << " ";

    return 0;
}