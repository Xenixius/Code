#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("MICES.INP", "r", stdin);
  freopen("MICES.OUT", "w", stdout);
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        vector<int> m(N), h(N);
        for (int i = 0; i < N; i++) {
            cin >> m[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> h[i];
        }
        sort(m.begin(), m.end());
        sort(h.begin(), h.end());
        int time = 0;
        for (int i = 0; i < N; i++) {
            time = max(time, abs(m[i] - h[i]));
        }
        cout << time << '\n';
    }
    return 0;
}
