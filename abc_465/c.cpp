#include <bits/stdc++.h>
#include <vector>

using namespace std;

void solve() {
  long long n;
  cin >> n;
  vector<char> s;
  vector<int> a;
  for (int i = 0; i < n; ++i) {
    char c;
    cin >> c;
    s.push_back(c);
    a.push_back(i + 1);
  }
  for (int i = 0; i < n; ++i) {
    if (s[i] == 'o') {
      for (int l = 0, r = i; l < r; ++l, --r) {
        swap(a[l], a[r]);
      }
    }
  }
  for (int i = 0; i < n; ++i) {
    cout << a[i] << " ";
  }
  cout << endl;
}

int main() {

  int t = 1;
  while (t--) {
    solve();
  }
  return 0;
}
