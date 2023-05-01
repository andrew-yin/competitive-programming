#include <bits/stdc++.h>
using namespace std;

#define first get<0>(i)
#define second get<1>(i)
#define third get<2>(i)

void solve() {
	int n;
	cin >> n;
	
	int a[n+1] = {0};
	priority_queue<tuple<int, int, int>> open;
	
	open.emplace(tuple<int, int, int>(n, -1, -n));
	
	int count = 1;
	tuple<int, int, int> i;
	while (!open.empty()) {
		i = open.top();
		open.pop();
		
		if (first % 2 == 1) {
			a[(-second - third)/2] = count;

			
			if (first > 1) {
				open.emplace(tuple<int, int, int>((first-1)/2, second, -(-second-third)/2 + 1));
				open.emplace(tuple<int, int, int>((first-1)/2, -(-second-third)/2 - 1, third));
			}
		}
		else{
			a[(-second - third-1)/2] = count;

			if (first > 2){
				open.emplace(tuple<int, int, int>(first/2-1, second, -(-second - third - 1)/2 + 1));
				open.emplace(tuple<int, int, int>(first/2, -(-second - third - 1)/2 - 1, third));
			}
			else{
				open.emplace(tuple<int, int, int>(1, third, third));
			}
		}
		
		count++;
	}
	
	for (int j=1; j<=n; j++){
		cout << a[j] << " ";
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