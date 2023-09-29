#include <bits/stdc++.h>
using namespace std;

#define LL long long

void compute(int nc, int i, const vector<unordered_set<int>> &neighbors, vector<bool>& visited, vector<vector<int>>& components) {
    visited[i] = true;
    components[nc-1].push_back(i);

    queue<int> q;
    q.push(i);
    while (!q.empty()) {
        int j = q.front(); q.pop();
        for (const int& k: neighbors[j]) {
            if (!visited[k]) {
                visited[k] = true;
                components[nc-1].push_back(k);
                q.push(k);
            }
        }
    }
}

bool is_wheel(int i, const vector<unordered_set<int>> &neighbors, const vector<vector<int>> &components) {
    const vector<int> component = components[i];
    
    set<int> visited;
    queue<int> q;
    q.push(component[0]);
    visited.insert(component[0]);
    while (!q.empty()) {
        int j = q.front(); q.pop();
        if (neighbors[j].size() != 2) {
            return false;
        }

        for (const int& k: neighbors[j]) {
            if (!visited.count(k)) {
                visited.insert(k);
                q.push(k);
            }
        }
    }
    return true;
}

void solve() {
    int n; cin >> n;
    vector<unordered_set<int>> neighbors(n+1);
    for (int i = 1; i <= n; i++) {
        int j; cin >> j;
        neighbors[i].insert(j);
        neighbors[j].insert(i);
    }

    int nc = 0;
    vector<bool> visited(n+1, false);
    vector<vector<int>> components;

    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            nc++;
            components.push_back(vector<int>());
            compute(nc, i, neighbors, visited, components);
        }
    }

    int num_wheels = 0;
    for (int i = 0; i < nc; i++) {
        if (is_wheel(i, neighbors, components)) {
            num_wheels++;
        }
    }

    cout << num_wheels + (num_wheels < nc ? 1 : 0) << " " << nc << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t; cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
