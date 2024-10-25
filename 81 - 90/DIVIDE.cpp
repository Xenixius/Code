#include <bits/stdc++.h>
using namespace std;

long long kq(long long n) {
    if (n == 1) return 0;
    unordered_set<long long> s;
    queue<pair<long long, int>> q;
    q.push({n, 0});

    while (!q.empty()) {
        long long so = q.front().first;
        int i = q.front().second;
        q.pop();

        if (so == 1) return i;

        for (int chia : {2, 3, 5})
            if (so % chia == 0) {
                long long j = so / chia * (chia - 1);
                if (s.find(j) == s.end()) {
                    s.insert(j);
                    q.push({j, i + 1});
                }
            }
    }

    return -1;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("DIVIDE.INP", "r", stdin);
    freopen("DIVIDE.OUT", "w", stdout);
    int q;
    cin >> q;
    while (q--) {
        long long n;
        cin >> n;
        cout << kq(n) << '\n';
    }
    return 0;
}
