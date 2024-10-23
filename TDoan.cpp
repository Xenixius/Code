#include <bits/stdc++.h>
#define ll long long
#define ft(i, l, r, d) for (int i = l; i < r; i += d)
#define fd(i, r, l, d) for (int i = r; i > l; i -= d)
#define ftf(i, l, r, d) for (int i = l; i <= r; i += d)
#define fdf(i, r, l, d) for (int i = r; i >= l; i -= d)
#define pb push_back
#define mp make_pair
#define all(x) x.begin(), x.end()
#define endl '\n'

using namespace std;

pair<int, int> tim(vector<int>& a, int k) {
    int n = a.size();
    
    unordered_map<ll, int> pre;
    ll s = 0;
    int ln = INT_MAX, l = 0;
    
    pre[0] = -1;
    
    ft (i, 0, n, 1) {
    	s += a[i];
        
    	if (pre.find(s - k) != pre.end()) {
        	int len = i - pre[s - k];
            	if (len < ln) {
                	ln = len;
                	l = pre[s - k] + 1;
            	}
        	}
        
        pre[s] = i;
    }
    
    if (ln == INT_MAX) return {0, 0};
    
    return {l + 1, ln};
}

int main() {
	File("TDOAN");
    int n, k; cin >> n >> k;
    
    vector<int> a(n);
    for (int& x : a) cin >> x;
    
    pair<int, int> kq = tim(a, k);
    
    if (kq.second == 0) cout << "0";
    else cout << kq.first << " " << kq.second;
}
