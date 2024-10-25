#include <bits/stdc++.h>
using namespace std;

long long F(vector<int>& a) {
    int n = a.size();
    sort(a.begin(), a.end());
    
    vector<int> kq(n);
    int left = 0, right = n - 1;
    
    for (int i = 0; i < n; i++)
        if (i % 2 == 0)
            kq[i] = a[left++];
        else
            kq[i] = a[right--];
    
    long long sum = 0;
    for (int i = 0; i < n; i++)
        sum += abs(kq[i] - kq[(i + 1) % n]);
    
    return sum;
}

int main() {
    freopen("SWAPANDMAX.INP", "r", stdin);
    freopen("SWAPANDMAX.OUT", "w", stdout);

    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> a(N);
        for (int i = 0; i < N; i++)
            cin >> a[i];
        
        cout << F(a) << '\n';
    }
}