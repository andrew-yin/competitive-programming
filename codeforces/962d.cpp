#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    priority_queue<pair<long long, int>> pos;
    for (int i=0, i<n; i++){
        long long j;
        cin >> j;
        pos.push(pair<long long, int>(-j, i));
    }

    while(pos.size() > 1){
        pair<long long, int> x = pos.pop();
        pair<long long, int> y = pos.top();
        if (x.first != y.first){

        }
    }
}

int main() {
	solve();
	return 0;
}
