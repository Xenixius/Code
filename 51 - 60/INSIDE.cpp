#include <bits/stdc++.h>
using namespace std;
struct Point {
    double x, y;
};

bool inside(Point A, Point B, Point C, Point D) {
    double ABC = 0.5 * abs((B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y));
    double ABD = 0.5 * abs((B.x - A.x) * (D.y - A.y) - (D.x - A.x) * (B.y - A.y));
    double ACD = 0.5 * abs((C.x - A.x) * (D.y - A.y) - (D.x - A.x) * (C.y - A.y));
    double BCD = 0.5 * abs((C.x - B.x) * (D.y - B.y) - (D.x - B.x) * (C.y - B.y));

    return ABC == ABD + ACD + BCD;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("INSIDE.INP", "r", stdin);
    freopen("INSIDE.OUT", "w", stdout);
    Point A, B, C, D;
    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> D.x >> D.y;

    cout << (inside(A, B, C, D) ? 1:0);
}