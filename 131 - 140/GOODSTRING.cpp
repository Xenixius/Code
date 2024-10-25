#include <bits/stdc++.h>
using namespace std;

vector<int> kq(int q, vector<string>& a) {
    vector<int> v;
    for (string s:a) {
        int z = 0, o = 0;
        for (char c:s)
            if (c == '0') z++;
            else o++;

        if (z == o)
            v.push_back(2);  
        else
            v.push_back(1);
    }
    return v;
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("GOODSTRING.INP", "r", stdin);
  freopen("GOODSTRING.OUT", "w", stdout);
    int q; cin >> q;
    vector<string> a(q);

    for (int i = 0; i < q; ++i) cin >> a[i];
    
    vector<int> v = kq(q, a);
    for (int i:v)
        cout << i << '\n';
}
