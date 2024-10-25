#include <bits/stdc++.h>
using namespace std;

vector<long long> al;

void prepare(int i, string s) {
  if (i == 10) return;
  for (char c : {'4', '7'}) {
    s += c;
    al.push_back(stoll(s));
    prepare(i + 1, s);
    s.pop_back();
  }
}

int main() {
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  freopen("FINDN.INP", "r", stdin);
  freopen("FINDN.OUT", "w", stdout);

  prepare(0, "");
  sort(al.begin(), al.end());
  long long t, n; cin >> t;
  while (t--) {
    cin >> n; cout << al[n-1] << '\n';
  }
}