#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("WRONGDIGIT.INP", "r", stdin);
    freopen("WRONGDIGIT.OUT", "w", stdout);
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); ++i) if (a[i] == '6') a[i] = '5';
    for (int i = 0; i < b.size(); ++i) if (b[i] == '6') b[i] = '5';
    cout << atoi(a.c_str()) + atoi(b.c_str()) << " ";
    for (int i = 0; i < a.size(); ++i) if (a[i] == '5') a[i] = '6';
    for (int i = 0; i < b.size(); ++i) if (b[i] == '5') b[i] = '6';
    cout << atoi(a.c_str()) + atoi(b.c_str());
    return 0;
}