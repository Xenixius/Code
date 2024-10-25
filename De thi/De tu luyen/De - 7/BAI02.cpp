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

vector<int> a(1000001, 1);

void sang() {
    a[0] = a[1] = 0;
    ftf(i, 2, sqrt(1000000), 1)
        if (a[i])
            ft(j, i*i, 1000000, i)
                a[j] = 0;
}

bool check(int x) {
    while (x > 0) {
        if (a[x] == 0) return 0;
        x /= 10;
    }
    return 1;
}

int main() {
    File("BAI02");
    int n, d = 0; cin >> n;
    sang();
    vector<int> a(n);
    for(int& i:a) {
        cin >> i;
        if (check(i)) d++;
    }
    cout << d;
}