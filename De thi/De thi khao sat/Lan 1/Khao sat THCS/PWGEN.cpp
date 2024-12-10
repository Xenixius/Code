#include <bits/stdc++.h>
#define ll long long
#define ft(i, l, r, d) for (int i = l; i < r; i += d)
#define fd(i, r, l, d) for (int i = r; i >= l; i -= d);
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define endl '\n'
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int main() {
    File("PWGEN");
    int n, a, b, c; cin >> n >> a >> b >> c;
    int n0 = n, a0 = a, b0 = b, c0 = c;
    string s = "", t = "";
    while (c0 > 0) {
        s += '0'; c0--;
        if (c0 > 0) { s += '1'; c0--; }
    }
    while (b0 > 0) {
        s += 'z'; b0--;
        if (b0 > 0) { s += 'y'; b0--; }
    }
    while (a0 > 0) {
        s += 'Z'; a0--;
        if (a0 > 0) { s += 'Y'; a0--; }
    }
    int temp = n - s.size();
    while (temp > 0) {
        s.insert(s.begin(), '0');
        temp--;
        if (temp > 0) {
            s.insert(s.begin() + 1, '1');
            temp--;
        }
    }
    cout << s << endl;

    while (b > 0) {
        t += 'z'; b--;
        if (b > 0) { t += 'y'; b--; }
    }
    while (a > 0) {
        t += 'Z'; a--;
        if (a > 0) { t += 'Y'; a--; }
    }
    while (c > 0) {
        t += '8'; c--;
        if (c > 0) { t += '9'; c--; }
    }
    temp = n - t.size();
    while (temp > 0) {
        t.insert(t.begin(), 'z');
        temp--;
        if (temp > 0) {
            t.insert(t.begin() + 1, 'y');
            temp--;
        }
    }
    cout << t << endl;
}