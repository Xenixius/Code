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
    File("STRING");
    int n; cin >> n;
    while (n--) {
        string s, t; cin >> s >> t;
        if (s.size() != t.size()) {
            cout << "no\n";
            continue;
        }
        
        vector<int> a(26, -1);
        bool check = true;
        
        for (int i = 0; i < s.size(); i++) {
            if (a[s[i] - 'a'] == -1) {
                a[s[i] - 'a'] = i;
            }
            if (s[i] != t[i] && (a[t[i] - 'a'] == -1 || a[t[i] - 'a'] > i)) {
                check = false;
                break;
            }
        }
        
        cout << (check ? "yes\n" : "no\n");
    }
}