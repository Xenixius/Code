#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

vector<vector<int>> dist(2001, vector<int>(2001, INF));

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("CITYRANK.INP", "r", stdin);
    freopen("CITYRANK.OUT", "w", stdout);
    int N, M;
    cin >> N >> M;

    for (int i = 1; i <= N; i++) {
        dist[i][i] = 0;
    }

    for (int i = 0; i < M; i++) {
        int u, v, c;
        cin >> u >> v >> c;
        dist[u][v] = c;
        dist[v][u] = c;
    }

    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (dist[i][k] != INF && dist[k][j] != INF) {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }

    vector<int> totalDist(N + 1, 0);
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= N; j++) {
            totalDist[i] += dist[i][j];
        }
    }

    int minDist = INF;
    int cityRank = 1;
    for (int i = 1; i <= N; i++) {
        if (totalDist[i] < minDist) {
            minDist = totalDist[i];
            cityRank = i;
        }
    }

    cout << cityRank << endl;

    return 0;
}