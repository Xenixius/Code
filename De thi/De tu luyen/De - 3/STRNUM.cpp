#include <bits/stdc++.h>
using namespace std;

string kq(string s, int k) {
    vector<char> v;
    for (char c:s) {
        while (k > 0 && !v.empty() && v.back() < c) v.pop_back(), k--;
        v.push_back(c);
    }
    while (k > 0) v.pop_back(), k--;
    string str(v.begin(), v.end());
    while (str.size() > 1 && str[0] == '0') str.erase(str.begin());
    return str.empty() ? "0" : str;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("STRNUM.INP", "r", stdin);
    freopen("STRNUM.OUT", "w", stdout);
    long long n, k; cin >> n >> k;
    string  s; cin >> s;
    cout << kq(s, k);
    return 0;
}