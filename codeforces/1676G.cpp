#include <bits/stdc++.h>
using namespace std;

// balance = numBlack - numWhite
int ans = 0;

int dfs(int root, vector<vector<int>>& children, vector<char>& colors) {
    int balance = colors[root] == 'B' ? 1 : -1;
    for (int i: children[root]) {
        balance += dfs(i, children, colors);
    }

    if (balance == 0) {
        ans++;
    }
    return balance;
}

void solve() {
    ans = 0;
    int n; cin >> n;
    vector<vector<int>> children(n+1, vector<int>());
    vector<char> colors(n+1);

    for (int i = 2; i <= n; i++) {
        int parent; cin >> parent;
        children[parent].push_back(i);
    }

    for (int i = 1; i <= n; i++) {
        char color; cin >> color;
        colors[i] = color;
    }

    int x = dfs(1, children, colors);
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}