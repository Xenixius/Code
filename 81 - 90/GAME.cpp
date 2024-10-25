#include <bits/stdc++.h>
using namespace std;

char hpp(int hp) {
    if (hp % 4 == 1) 
        return 'A';
    else if (hp % 4 == 3) 
        return 'B';
    else if (hp % 4 == 2) 
        return 'C';
    else
        return 'D';
}

pair<int, char> kq(int hp) {
    char k = hpp(hp);
    int t = 0;
    char t1 = k;

    for (int i = 0; i < 3; i++) {
        int h1 = hp + i;
        char n = hpp(h1);
        if (n < t1) {
            t1 = n;
            t = i;
        }
    }

    return make_pair(t, t1);
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("GAME.INP", "r", stdin);
    freopen("GAME.OUT", "w", stdout);

    int q;
    cin >> q;

    for (int i = 0; i < q; i++) {
        int hp;
        cin >> hp;
        pair<int, char> res = kq(hp);
        cout << res.first << " " << res.second << endl;
    }

    return 0;
}