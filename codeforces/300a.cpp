#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> neg;
    vector<int> pos;
    vector<int> zero;

    for (int i=0; i<n; i++) {
        int j;
        cin >> j;
        if (j > 0) {
            pos.push_back(j);
        }
        else if (j < 0) {
            neg.push_back(j);
        }
        else {
            zero.push_back(j);
        }
    }

    if (neg.size() % 2 == 0) {
        int i = neg.back();
        neg.pop_back();
        zero.push_back(i);
    }

    if (pos.size() == 0) {
        for (int i=0; i<2; i++) {
            int j = neg.back();
            neg.pop_back();
            pos.push_back(j);
        }
    }

    cout << neg.size() << " ";
    for (int i: neg) {
        cout << i << " ";
    }
    cout << "\n" << pos.size() << " ";
    for (int i: pos) {
        cout << i << " ";
    }
    cout << "\n" << zero.size() << " ";
    for (int i: zero) {
        cout << i << " ";
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
	return 0;
}
