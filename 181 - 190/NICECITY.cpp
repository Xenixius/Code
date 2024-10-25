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

int f(int N, vector<int>& a) {
    int st = 0, ed = 0;

    for (int j = N - 1; j >= 0; --j) {
        if (a[j] != a[0]) {
            st = j;
            break;
        }
    }

    for (int i = 0; i < N; ++i) {
        if (a[i] != a[N - 1]) {
            ed = N - 1 - i;
            break;
        }
    }
    
    return max(st, ed);
}

int main() {
    File("NICECITY");
    int N;
    cin >> N;
    vector<int> a(N);

    for (int i = 0; i < N; ++i) cin >> a[i];

    cout << f(N, a) << endl;
}
