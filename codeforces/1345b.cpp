#include <bits/stdc++.h>
using namespace std;

void solve(){
	int n;
	cin >> n;
	
	stack<int> pyras;
	int last = 0;
	int h = 1;
	int curr = last + 3*h-1;
	while (curr <= n){
		pyras.push(curr);
		h++;
		last = curr;
		curr = last + 3*h-1;
	}
	int count = 0;
	while (!pyras.empty()){
		if (pyras.top() <= n){
			n -= pyras.top();
			count++;
		}
		else{
			pyras.pop();
		}
	}
	
	cout << count << "\n";

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}