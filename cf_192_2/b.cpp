#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> array(n);
  for (int i = 0; i < n; ++i) {
    cin >> array[i];
  }
  int marker = 1;
  int count = 0;
  bool found_place = false;
  for (int i = 0; i < n - 2; ++i) {
    if (array[i] == 1) {
      count += 1;
    } else {
      count -= 1;
    }
    if (count == 0) {
      marker = i + 1;
    }
  }
  return;
}

int main() {
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
