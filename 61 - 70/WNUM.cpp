#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("WNUM.INP", "r", stdin);
    freopen("WNUM.OUT", "w", stdout);
    int n, a;
    cin >> n >> a;
    
    int arr[10] = {0};
    
    for(int i = a; i <= a+n-1; i++) {
        int temp = i;
        while(temp > 0) {
            int x = temp % 10;
            arr[x]++;
            temp /= 10;
        }
    }
    
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
} 