#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("MUL13.INP", "r", stdin);
    freopen("MUL13.OUT", "w", stdout);
    long long L, R, sum = 0; 
    cin >> L >> R;
    sum = (R - L + 1) * (L + R) / 2;
    for (int i = (L + 12) / 13; i * 13 <= R; i++) sum -= i*13;
    cout << sum;
    return 0;
}