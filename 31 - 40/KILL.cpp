#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("KILL.INP", "r", stdin);
    freopen("KILL.OUT", "w", stdout);
    int A, B, C; cin >> A >> B >> C; bool pass = 0;
    for (int i = 0; i <= C/A; i++)
        for (int j = 0; j <= C/B; j++)
            if (C - i*A - j*B == 0) pass = 1;
    cout << (pass ? "Yes":"No");
    return 0;
}