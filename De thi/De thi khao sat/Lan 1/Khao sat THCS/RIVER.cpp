#include <bits/stdc++.h>
#define ll long long
#define ft(i, l, r, d) for (int i = l; i < r; i += d)
#define fd(i, r, l, d) for (int i = r; i >= l; i -= d);
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define endl '\n'
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int main() {
    File("RIVER");
    int n, m, j; cin >> n >> m >> j;

    vector<int> a(n + 1);
    ft(i, 1, n + 1, 1) a[i] = 1 + ((i - 1) * (i - 1) % m);
    vector<int> dist(n + 1, INT_MAX);
    dist[0] = 0;
    queue<int> q;
    q.push(0);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        ft(v, u + 1, min(n, u + j) + 1, 1) {
            if (dist[u] + a[v - u] < dist[v]) {
                dist[v] = dist[u] + a[v - u];
                q.push(v);
            }
        }
        
        if (dist[n] != INT_MAX) break;
    }
    
    cout << (dist[n] != INT_MAX ? dist[n] : -1);
}