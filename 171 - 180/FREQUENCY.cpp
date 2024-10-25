#include <bits/stdc++.h>
#define ll long long
#define ft(i, l, r, d) for (int i = l; i < r; i += d)
#define fd(i, r, l, d) for (int i = r; i >= l; i -= d)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define endl '\n'
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int main() {
    File("FREQUENCY");
    int n; cin >> n; map<int, int> m;
    ft(i, 0, n, 1) {
        int x; cin >> x;
        m[x]++;
    }
    
    int MAX = 0;
    for (auto& i : m) MAX = max(MAX, i.second);
    for (auto i : m) if (i.second == MAX) cout << i.first << ' ';
}