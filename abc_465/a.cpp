#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
  double a, b;
  cin >> a >> b;
  if (a > (b * (2.0 / 3))) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return;
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
