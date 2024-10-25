#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("RECTANGLES.INP", "r", stdin);
    freopen("RECTANGLES.OUT", "w", stdout);
    int T; cin >> T;

    while (T--) {
        int N; cin >> N;
        set<int> s;

        for (int a = 1; a <= N / 2; a++) {
            int b = (N - 2 * a) / 2;
            if (a <= b && (N - 2 * a) % 2 == 0) 
                s.insert(a * b);
        }

        if (!s.empty()) {
            for (auto it = s.begin(); it != s.end(); ++it) 
                cout << *it << " ";
            cout << '\n';
        }
        else cout << "-1\n";
    }
}