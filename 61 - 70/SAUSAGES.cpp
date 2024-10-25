#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("SAUSAGES.INP", "r", stdin);
    freopen("SAUSAGES.OUT", "w", stdout);
    int N, M;
    cin >> N >> M;
    cout << (N % M == 0 ? 0:M - __gcd(N, M));
}
