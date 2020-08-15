class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<pair<int, int>> rottens;
        int ans = 0;

        for (int i=0; i<grid.size(); i++) {
            for (int j=0; j<grid[i].size(); j++) {
                if (grid[i][j] == 2) {
                    rottens.push_back(make_pair(i, j));
                }
            }
        }                  

        unordered_map<int, unordered_map<int, int>> visited;
        while (!rottens.empty()) {
            vector<pair<int, int>> frontier;
            for (auto i: rottens) {
                if (!visited[i.first][i.second]) {
                    visited[i.first][i.second] = 1;

                    // check left
                    if (i.second-1 >= 0 && grid[i.first][i.second-1] == 1) {
                        frontier.push_back(make_pair(i.first, i.second-1));
                        grid[i.first][i.second-1] = 2;
                    }
                    // check right
                    if (i.second+1 <= grid[i.first]size()-1 && grid[i.first][i.second+1] == 1) {
                        frontier.push_back(make_pair(i.first, i.second+1));
                        grid[i.first][i.second+1] = 2;
                    }
                    // check up
                    if (i.first-1 >= 0 && grid[i.first-1][i.second] == 1) {
                        frontier.push_back(make_pair(i.first-1, i.second));
                        grid[i.first-1][i.second] = 2;
                    }
                    // check down
                    if (i.first+1 <= grid.size()-1  && grid[i.first+1][i.second] == 1) {
                        frontier.push_back(make_pair(i.first+1, i.second));
                        grid[i.first+1][i.second] = 2;
                    }
                }
            }
            rottens = frontier;
            if (!frontier.empty()) {
                ans++;
            }
        }

        for (auto i: grid) {
            for (int j: i) {
                if (j == 1) {
                    return -1;
                }
            }
        }
        return ans;
};
