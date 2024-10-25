#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("CANDY.INP", "r", stdin);
    freopen("CANDY.OUT", "w", stdout);

    long long n, m; cin >> n >> m;
    vector<int> a(n + 1); deque<int> dq;
    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) dq.push_back(i);
    
    while (dq.size() > 1) {
        int s = dq.front();
        dq.pop_front();
        if (a[s] > m) {
            a[s] -= m;
            dq.push_back(s);
        }
    }
    cout << dq.front();
}