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

long long f(int n, const string& s) {
    unordered_map<int, long long> d;
    d[0] = 1;
    int x = 0;
    long long kq = 0;

    for (char c : s) {
        if (c == 'a') {
            x++;
        } else {
            x--;
        }

        if (d.find(x) != d.end()) {
            kq += d[x];
            d[x]++;
        } else {
            d[x] = 1;
        }
    }

    return kq;
}

int main() {
    File("DANCE");
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << f(n, s) << endl;

    return 0;
}
