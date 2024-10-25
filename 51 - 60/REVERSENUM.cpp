#include <bits/stdc++.h> 
using namespace std; 

int rev(int n) { 
	int ans = 0; 
	while (n > 0) { 
		ans = ans * 10 + n % 10; 
		n = n / 10; 
	} 
	return ans; 
} 

int main() { 
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("REVERSENUM.INP", "r", stdin);
    freopen("REVERSENUM.OUT", "w", stdout);
	int a, b; cin >> a >> b;
	cout << (rev(a) > rev(b) ? rev(a):rev(b));
	return 0; 
}
