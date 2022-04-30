#include <bits/stdc++.h>
using namespace std;

bool impossible = false;

void assignWeights(int i, vector<int>& ans, vector<vector<int>>& neighbors, unordered_map<int, unordered_map<int, int>> & edge_num, vector<int>& visited, int num) {
    if (!impossible) {
        visited[i] = true;
        if (neighbors[i].size() > 2) {
            cout << "-1\n";
            impossible = true;
            return;
        }
        else {
            if (!visited[neighbors[i][0]]) {
                ans[edge_num[i][neighbors[i][0]]] = num;
                int next_num = num == 2 ? 3 : 2;
                assignWeights(neighbors[i][0], ans, neighbors, edge_num, visited, next_num);
            }
            if (neighbors[i].size() == 2 && !visited[neighbors[i][1]]) {
                ans[edge_num[i][neighbors[i][1]]] = num;
                int next_num = num == 2 ? 3 : 2;
                assignWeights(neighbors[i][1], ans, neighbors, edge_num, visited, next_num);
            }
        }
    }
}

void solve(){
    impossible = false;
    int n; cin >> n;
    vector<vector<int>> neighbors(n+1);
    unordered_map<int, unordered_map<int, int>> edge_num;
    for (int i = 1; i <= n-1; i++) {
        int j, k; cin >> j >> k;
        neighbors[j].push_back(k);
        neighbors[k].push_back(j);
        edge_num[j][k] = i;
        edge_num[k][j] = i;
    }

    vector<int> ans(n);
    if (neighbors[1].size() > 2) {
        cout << "-1\n";
        return;
    }
    else {
        vector<int> visited(n+1, false);
        visited[1] = true;
        ans[edge_num[1][neighbors[1][0]]] = 2;
        assignWeights(neighbors[1][0], ans, neighbors, edge_num, visited, 3);
        if (neighbors[1].size() == 2) {
            ans[edge_num[1][neighbors[1][1]]] = 3;
            assignWeights(neighbors[1][1], ans, neighbors, edge_num, visited, 2);
        }
    }

    if (!impossible) {
        for (int i = 1; i <= n-1; i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
}
 
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    int t; cin >> t;
    while(t--){
        solve();
    }
}