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
    File("FRIENDS");
    int n; cin >> n;
    vector<pair<int, int>> v(n);
    for (auto& i : v) cin >> i.first >> i.second;

    unordered_map<int, vector<int>> adj;
    for (const auto& p : v) {
        adj[p.first].pb(p.second);
    }

    int x, y;
    while (true) {
        cin >> x >> y;
        if (x == 0 && y == 0) break; 

        queue<int> q;
        unordered_set<int> st;
        unordered_map<int, int> mp;
        q.push(x);
        st.insert(x);
        mp[x] = 0;

        bool f = false;
        while (!q.empty()) {
            int curr = q.front();
            q.pop();

            if (curr == y) {
                f = true;
                break;
            }

            for (int i : adj[curr]) {
                if (!st.count(i)) {
                    st.insert(i);
                    q.push(i);
                    mp[i] = mp[curr] + 1;
                }
            }
        }

        if (f) cout << "Yes " << mp[y] - 1 << endl;
        else cout << "No\n";
    }

    return 0;
}
