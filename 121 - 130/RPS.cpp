#include <bits/stdc++.h>
using namespace std;
int n, a, b, c, w, k;
string s;
vector <string> s1;
vector <bool> sd;
int main() {
  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("RPS.INP", "r", stdin);
    freopen("RPS.OUT", "w", stdout);
    cin >> k;
    while(k--) {
        cin >> n >> a >> b >> c;
        cin >> s;
        s1.assign(n, "");
        sd.assign(n, false);
        for(int i = 0; i < n; i++) {
            if(s[i] == 'R' && b > 0) {
                b--;
                s1[i] = "P";
                sd[i] = true;
                w++;
            }
            else if(s[i] == 'P' && c > 0) {
                c--;
                s1[i] = "S";
                sd[i] = true;
                w++;
            }
            else if(s[i] == 'S' && a > 0) {
                a--;
                s1[i] = "R";
                sd[i] = true;
                w++;
            }
        }
        if(ceil(n/2.0) > w) cout << "NO\n";
        else {
            for(int i = 0; i < n; i++) {
                if (!sd[i]) {
                    if (a > 0) {
                        s1[i] = "R";
                        a--;
                    } 
                    else if (b > 0) {
                        s1[i] = "P";
                        b--;
                    }
                    else if (c > 0) {
                        s1[i] = "S";
                        c--;
                    }
                }
            }
            cout << "YES\n";
            for(int i = 0; i < n; i++)
                cout << s1[i];
            cout << "\n";
        }
        w = 0;
    }
}