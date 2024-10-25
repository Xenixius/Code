#include <bits/stdc++.h>
#define ll long long
#define ft(i, l, r, d) for (int i = l; i < r; i += d)
#define fd(i, r, l, d) for (int i = r; i >= l; i -= d)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define endl '\n'
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout)

using namespace std;

vector<pair<int, int>> process_moves(int n, int m, vector<pair<int, int>>& moves) {
    vector<int> left(n + 1);
    vector<int> right(n + 1);

    ft(i, 1, n + 1, 1) {
        left[i] = i - 1;
        right[i] = i + 1;
    }
    right[n] = 0; 

    for (const auto& move : moves) {
        int i = move.first;
        int j = move.second;

        if (left[i]) {
            right[left[i]] = right[i];
        }
        if (right[i]) {
            left[right[i]] = left[i];
        }

        left[i] = left[j];
        right[i] = j;

        if (left[j]) {
            right[left[j]] = i;
        }
        left[j] = i;
    }

    vector<pair<int, int>> result;
    ft(i, 1, n + 1, 1) {
        int l_neighbor = (left[i] != 0) ? left[i] : 0;
        int r_neighbor = (right[i] != 0) ? right[i] : 0;
        result.pb(mp(l_neighbor, r_neighbor));
    }
    
    return result;
}

int main() {
    File("PHOTO");
    int n, m;
    cin >> n >> m;
    vector<pair<int, int>> moves(m);
    ft(i, 0, m, 1) {
        cin >> moves[i].first >> moves[i].second;
    }

    vector<pair<int, int>> result = process_moves(n, m, moves);

    for (const auto& p : result)
        cout << p.first << " " << p.second << endl;
}
