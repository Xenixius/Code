// Horizon
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
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int main() {
    File("MESSAGE");
    int n, k;
    cin >> n >> k;
    
    deque<int> dq;
    set<int> st;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        
        if (st.count(x)) {
            continue;
        }
        

        if (dq.size() == k) {
            int y = dq.back();
            dq.pop_back();
            st.erase(y);
        }
        
        dq.push_front(x);
        st.insert(x);
    }
    
    cout << dq.size() << endl;
    for (int x : dq) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}