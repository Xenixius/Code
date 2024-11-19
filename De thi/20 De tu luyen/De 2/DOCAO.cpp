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
#define m 1000001
using namespace std;

vector<int> a(m, 1);

void sang() {
    a[0] = a[1] = 0; 
    for (int i = 2; i * i < m; i++) {
        if (a[i]) 
            for (int j = i * i; j < m; j += i) 
                a[j] = 0;
    }
}

int he(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    File("DOCAO");
    int n, h, d = 0; 
    cin >> n >> h;

    sang();

    ftf(i, 1, n, 1) {
        if (a[i] && he(i) == h) {
            cout << i << endl;
            d++;
        }
    }
    cout << d;
}
