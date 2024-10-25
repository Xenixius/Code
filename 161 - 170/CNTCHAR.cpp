#include <bits/stdc++.h>
#define int long long
using namespace std;

main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("CNTCHAR.INP", "r", stdin);
    freopen("CNTCHAR.OUT", "w", stdout);
    string s; cin >> s;
    vector<int> cnt(26);
    for(char c : s) cnt[c - 'a']++;
    for(int i = 0; i < 26; i++) {
        if(cnt[i] > 0) cout << char(i + 'a') << ":" << cnt[i] << '\n';
    }
}
