
// Problem : F. Binary String Reconstruction
// Contest : Codeforces - Codeforces Round #640 (Div. 4)
// URL : https://codeforces.com/contest/1352/problem/F
// Memory Limit : 256 MB
// Time Limit : 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int zero, one, two;
  cin >> zero >> one >> two;
  if (two > 0) {
    for (int i = 0; i < two + 1; i++) {
      cout << "1";
    }
  }
  if (zero > 0) {
    for (int i = 0; i < zero + 1; i++) {
      cout << "0";
    }
  }

  if (one > 0) {
    if (two > 0) {
      if (zero > 0) {
      	bool printOne = true;
        for (int i = 0; i < one - 1; i++) {
          if (printOne) {
            cout << "1";
            printOne = false;
          } else {
            cout << "0";
            printOne = true;
          }
        }
      } else {
        bool printOne = false;
        for (int i = 0; i < one; i++) {
          if (printOne) {
            cout << "1";
            printOne = false;
          } else {
            cout << "0";
            printOne = true;
          }
        }
      }
    } else {
      if (zero > 0) {
        bool printOne = true;
        for (int i = 0; i < one; i++) {
          if (printOne) {
            cout << "1";
            printOne = false;
          } else {
            cout << "0";
            printOne = true;
          }
        }
      } else {
        bool printOne = true;
        for (int i = 0; i < one + 1; i++) {
          if (printOne) {
            cout << "1";
            printOne = false;
          } else {
            cout << "0";
            printOne = true;
          }
        }
      }
    }
  }
  cout << "\n";
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