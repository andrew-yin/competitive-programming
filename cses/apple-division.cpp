// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

int n;
long long sum = 0;
long long weights[20];
long long ans = 0;

vector<int> subset;
void solve(int i) {
    if (i == n) {
        long long subsum = 0;
        for (int j : subset) {
            subsum += weights[j];
        }
        long long diff = abs(sum - 2 * subsum);
        ans = min(ans, diff);
    }
    else {
        solve(i+1);
        subset.push_back(i);
        solve(i+1);
        subset.pop_back();
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
        sum += weights[i];
    }

    ans = sum;
    solve(0);
    cout << ans;

    return 0;
}
