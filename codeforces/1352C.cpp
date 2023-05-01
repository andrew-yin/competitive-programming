#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n, k;
  cin >> n >> k;

  if (k % (n - 1) == 0) {
    cout << k + k / (n - 1) - 1 << "\n";
  } else {
    cout << k + k / (n - 1) << "\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}