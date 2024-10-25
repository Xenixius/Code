#include <bits/stdc++.h>
#define ll long long
#define FOR(i, x, n, d) for (int i = (x); i < (n); i += (d))
#define File(name) freopen(name".INP", "r", stdin); freopen(name".OUT", "w", stdout);
using namespace std;

int main() {
    File("AVERAGE");
    int N; cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];

    int kq = 0, len = 0, q = *max_element(A.begin(), A.end());

    for (int i = 0; i < N; i++) {
        if (A[i] == q) {
            len++;
            kq = max(kq, len);
        } else len = 0;
    }

    cout << kq;
}