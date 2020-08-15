#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int ans = 0;
    int prev, curr, best, worst;
    cin >> prev;
    best = prev;
    worst = prev;

    for (int i=0; i<n-1; i++){
        cin >> curr;
        if (curr != prev){
            if (curr > best){
                best = curr;
                ans++;
            }
            else if (curr < worst){
                worst = curr;
                ans++;
            }
        }
        prev = curr;
    }
    cout << ans;
}

int main() {
    solve();
	return 0;
}
