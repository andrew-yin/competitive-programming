// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

int n;
int a[200000];

void solve() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    unordered_set<long long int> prefixes;
    prefixes.insert(0);

    int ans = 0;
    long long int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        if (prefixes.count(sum) > 0) {
            ans++;
            prefixes.clear();
            prefixes.insert(0);
            sum = a[i];
        }
        prefixes.insert(sum);
    }

    cout << ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
