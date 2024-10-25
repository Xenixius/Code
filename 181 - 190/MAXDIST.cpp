// Horizon
#include <bits/stdc++.h>
#define ll long long
#define ft(i, l, r, d) for (int i = l; i < r; i += d)
#define fd(i, r, l, d) for (int i = r; i > l; i -= d)
#define ftf(i, l, r, d) for (int i = l; i <= r; i += d)
#define fdf(i, r, l, d) for (int i = r; i >= l; i -= d)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define endl '\n'
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int main() {
    File("MAXDIST");
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N; 
        vector<int> A(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        unordered_map<int, pair<int, int>> mp;
        int kq = 0;

        for (int i = 0; i < N; ++i) {
            if (mp.find(A[i]) == mp.end()) {
                mp[A[i]] = {i, i};
            } else {
                mp[A[i]].second = i;
            }
        }

        for (const auto& i : mp) {
            int l = i.second.first;
            int r = i.second.second;
            kq = max(kq, r - l);
        }

        cout << kq << endl; 
    }

    return 0;
}
