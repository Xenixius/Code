#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("DTCD.INP", "r", stdin);
    freopen("DTCD.OUT", "w", stdout);
    int N, d = 0; cin >> N;

    vector<int> a(N);
    for (int i = 0; i < N; i++) cin >> a[i];

    set<int> s;
    for (int i = 0; i < N; i++) 
        for (int j = i + 1; j < N; j++) {
            if ((a[i] + a[j]) % 2 == 0) {
                int m = (a[i] + a[j]) / 2;
                s.insert(m);
            }
        }

    for (int i : a) if (s.count(i)) d++;

    cout << d;
}