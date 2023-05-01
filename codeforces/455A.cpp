#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	
	unsigned long long int count[100001] = {0};
	unsigned long long int j;
	unsigned long long int largest = 0;
	for (int i=0; i<n; i++){
		cin >> j;
		count[j]++;
		if (j > largest){
			largest = j;
		}
	}
	
	unsigned long long int dp[largest+1];
	dp[0] = 0;
	dp[1] = count[1];
	for (unsigned long long int i=2; i<=largest; i++){
		dp[i] = max(dp[i-1], dp[i-2] + count[i]*i);
	}
	
	cout << dp[largest];
	
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

	solve();
	
    return 0;
}