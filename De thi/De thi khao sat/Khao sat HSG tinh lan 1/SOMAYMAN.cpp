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

string f(ll n) {
    string s = "";
    n--;

    int len = 1;
    ll d = 2;
    while (n >= d) {
        n -= d;
        d *= 2;
        len++;
    }

    for (int i = 0; i < len; i++)
        if (n & (1LL << (len - 1 - i))) s += '8';
        else s += '6';
    return s;
}

int main() {
  File("SOMAYMAN");
    ll n; cin >> n;
    cout << f(n);
}