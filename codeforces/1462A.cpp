#include <bits/stdc++.h>
using namespace std;

void solve() {
    deque<int> a;
    
    int n;
    cin >> n;

    for (int i=0; i<n; i++) {
        int j;
        cin >> j;
        a.push_back(j);
    }

    for (int i=0; i<n; i++) {
        int j; 
        if (i % 2 == 0) {
            j = a.front();
            a.pop_front();
        }
        else {
            j = a.back();
            a.pop_back();
        }
        cout << j << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int t;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}
