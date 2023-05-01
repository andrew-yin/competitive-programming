#include <bits/stdc++.h>
using namespace std;

void solve() {
	string moves;
	cin >> moves;
	
	set<pair<pair<int, int>, pair<int, int>>> visited;
	
	pair<int, int> start(0, 0);
	pair<int, int> end;
	
	int ans = 0;
	for (unsigned long int j=0; j<moves.length(); j++){
		char i = moves[j];
		if (i == 'N'){
			end.first = start.first;
			end.second = start.second+1;
		}
		else if (i == 'S'){
			end.first = start.first;
			end.second = start.second-1;
		}
		else if (i == 'E'){
			end.first = start.first+1;
			end.second = start.second;
		}
		else{
			end.first = start.first-1;
			end.second = start.second;
		}
		
		pair<pair<int, int>, pair<int, int>> path1(start, end);
		pair<pair<int, int>, pair<int, int>> path2(end, start);
		
		if (visited.count(path1) || visited.count(path2)){
			ans += 1;
		}
		else{
			ans += 5;
			visited.insert(path1);
		}
		
		start = end;
	}
	
	cout << ans << "\n";
	
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