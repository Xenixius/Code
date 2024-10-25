#include <bits/stdc++.h>
using namespace std;

bool Check(int a, int b, int r) {
    for (int i = 0; i <= a - 2 * r; i++) 
        for (int j = 0; j <= b - 2 * r; j++) 
            if (!Check(a - i - 2 * r, b - j - 2 * r, r))
                return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("PLATEGAME.INP", "r", stdin);
    freopen("PLATEGAME.OUT", "w", stdout);
    int a, b, r;
    cin >> a >> b >> r;
    if (Check(a, b, r))
        cout << "First";
    else
        cout << "Second";
    return 0;
}