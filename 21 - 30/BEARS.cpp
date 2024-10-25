#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BEARS.INP", "r", stdin);
    freopen("BEARS.OUT", "w", stdout);
    int A, B, count = 0;
    cin >> A >> B;
    while (A <= B) {
        A *= 3;
        B *= 2;
        count++;
    }
    cout << count;
}