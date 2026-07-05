
#include <bits/stdc++.h>

using namespace std;

void solve() {
  int x, y, l, r, a, b;
  cin >> x >> y >> l >> r >> a >> b;
  int total = b - a;
  int count = 0;
  /* search hours between l->r */
  for (int i = a; i <= b; ++i) {
    if (i >= l && i <= r) {
      count += 1;
    }
  }
  if (count == 0) {
    cout << (total * y) << endl;
    return;
  }
  int fee = ((count - 1) * x) + ((total - count + 1) * y);
  cout << fee << endl;
}

int main() {
  // #ifndef ONLINE_JUDGE
  //   freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);
  // #endif

  long long t = 1;
  while (t--) {
    solve();
  }
  return 0;
}
