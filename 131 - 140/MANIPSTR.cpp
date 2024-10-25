#include <bits/stdc++.h>
using namespace std;

bool f(string a, string b) {
    map <char, size_t> am, bm;

    for (auto i: a) am[i]++;

    for (auto i: b) bm[i]++;

    string aq = "", bq = "";

    for (auto i:am)
        if (bm[i.first] < i.second) {
            size_t x = i.second - bm[i.first];
            for (size_t j = 0; j < x; j++)
                aq += i.first;
        }

    for (auto i:bm)
        if (am[i.first] < i.second) {
            size_t x = i.second - am[i.first];
            for (size_t j = 0; j < x; j++)
                bq += i.first;
        }

    for (auto & i: aq)
        for (auto & j: bq) {
            swap(i, j);
            if (aq == bq) return 1;
            else swap(i, j);
        }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("MANIPSTR.INP", "r", stdin);
    freopen("MANIPSTR.OUT", "w", stdout);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        if (f(a, b)) cout << "Yes\n";
        else cout << "No\n";
    }
}