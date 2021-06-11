// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;


void solve() {
    int n;
    cin >> n;
    
    vector<vector<int>> nums(10, vector<int>(10, 0));

    for (int i = 1; i <= n; i++) {
        int digits = floor(log10(i))+1;
        int first = i/((int) pow(10, digits-1));
        int last = (i % 10);
        nums[first][last]++;
    }

    int ans = 0;
    for (int i = 0; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            ans += nums[i][j]*nums[j][i];
        }
    }

    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
