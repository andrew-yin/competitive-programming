#include <bits/stdc++.h>
using namespace std;

int n, coords[100][2], x_cur, y_cur;
bool visited[100] = {false};


void solve(int x, int y){
	for (int i=0; i<n; i++){
		if (!visited[i]){
			if (coords[i][0] == x || coords[i][1] == y){
				visited[i] = true;
				solve(coords[i][0], coords[i][1]);
			}
		}
	}
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

	cin >> n;
	for (int i=0; i<n; i++){
		for (int j=0; j<2; j++){
			cin >> coords[i][j];
		}
	}
	
	int count = 0;
	for (int i=0; i<n; i++){
		if (!visited[i]){
			count++;
			visited[i] = true;
			solve(coords[i][0], coords[i][1]);
		}
	}
	
	cout << count-1;
	
	

    return 0;
}