#include <bits/stdc++.h>
#define ll long long
#define FOR(i, x, n, d) for (int i = (x); i < (n); i += (d))
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int main() {
    File("GAME");
    int n, p, q;
    cin >> n >> p;

    vector<int> a(p);
    for (auto& i : a) cin >> i;

    cin >> q;
    vector<int> b(q);
    for (auto& i : b) cin >> i;

    set<int> s;
    for (auto& i : a) s.insert(i);
    for (auto& i : b) s.insert(i);
    if (s.size() == n) cout << "YES\n";
    else cout << "NO\n";
}