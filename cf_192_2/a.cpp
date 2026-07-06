#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> array(n);
  for (int i = 0; i < n; ++i) {
    cin >> array[i];
  }
  int count = 0;
  for (int i = 0; i < n; ++i) {
    if (array[i] >= 3) {
      cout << "Yes" << endl;
      return;
    } else if (array[i] == 2) {
      count += 1;
    }
  }
  if (count >= 2) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

int main() {
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
