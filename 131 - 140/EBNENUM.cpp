#include <bits/stdc++.h>
using namespace std;

bool odd(char digit) {
    return (digit - '0') % 2 != 0;
}

string f(string& S) {
    vector<char> a(S.begin(), S.end());
    int t = 0;
    
    for (char d : a) t += (d - '0');
    
    for (size_t i = 0; i < a.size(); ++i)
        for (size_t j = i; j < a.size(); ++j) {
            vector<char> s1(a.begin() + i, a.begin() + j + 1);
            int t1 = 0;
            for (char j:s1) t1 += (j - '0');
            if (t1 % 2 == 0 && odd(s1.back())) 
                return string(s1.begin(), s1.end());
        }
        
    return "-1";
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("EBNENUM.INP", "r", stdin);
    freopen("EBNENUM.OUT", "w", stdout);
    int T; cin >> T;
    for (int t = 0; t < T; ++t) {
        int N; cin >> N;
        string S; cin >> S;
        cout << f(S) << '\n';
    }
}

