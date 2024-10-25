#include <bits/stdc++.h>
#define ll long long
#define FOR(i, x, n, d) for (int i = (x); i < (n); i += (d))
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int main() {
    File("MINPLACES");
    int T, N, x;
    cin >> T;
    while (T--) {
        cin >> N;
        vector<pair<int, int>> a;
        for (int i = 0; i < N; i++) {
            cin >> x;
            a.push_back({x, 1});
        }
        for (int i = 0; i < N; i++) {
            cin >> x;
            a.push_back({x, -1});
        }
        sort(a.begin(), a.end());
        int c = 0, kq = 0;
        for (auto& e : a) {
            c += e.second;
            kq = max(kq, c);
        }
        cout << kq << '\n';
    }
    return 0;
}