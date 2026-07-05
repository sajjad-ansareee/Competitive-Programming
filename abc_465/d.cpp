#include <bits/stdc++.h>

using namespace std;

void solve() {
  long long X, Y, K;
  cin >> X >> Y >> K;
  long long x = X;
  int count = 0;
  while (x != Y) {
    if (x > Y) {
      x = x / K;
    } else {
      x = x * K;
      if ((Y >= x) && (Y < (x + K))) {
        x = Y;
      }
    }
    count += 1;
  }
  cout << count << endl;
}

int main() {
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
