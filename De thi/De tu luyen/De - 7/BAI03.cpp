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

int f(int n, const vector<int>& a) {
    unordered_set<int> s1(a.begin(), a.end());
    unordered_set<int> s2;
    ft(i, 0, n, 1) {
        ft(j, i+1, n, 1) {
            int k = (a[i] + a[j]) / 2;
            if ((a[i] + a[j]) % 2 == 0 && s1.count(k)) {
                s2.insert(k);
            }
        }
    }

    return s2.size();
}

int main() {
    File("BAI03");
    int n;
    cin >> n;
    vector<int> a(n);

    ft(i, 0, n, 1) cin >> a[i];
    cout <<  f(n, a);

    return 0;
}
