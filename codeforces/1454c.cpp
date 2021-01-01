#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a;
    unordered_map<int, int> counts;
    
    for (int i=1; i <= n; i++) {
        int x;
        cin >> x;
        if ((i == 1) || (i > 1 && x != a.back())) {
            a.push_back(x);
        }
    }

    int a_n = a.size();
    for (int i = 0; i < a_n; i++) {
        counts[a[i]]++;
    }
    for (auto i: counts) {
        counts[i.first]++;
    }
    counts[a[0]]--;
    counts[a[a_n-1]]--;

    int ans = 200001;
    for (auto i: counts) {
        if (i.second < ans) {
            ans = i.second;
        }
    }
        
    cout << ans << "\n";
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
