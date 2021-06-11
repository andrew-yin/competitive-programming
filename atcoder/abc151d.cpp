// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

char maze[21][21];
int h, w;

int bfs(pair<int, int> start, pair<int, int> end) {
    vector<vector<bool>> visited(w, vector<bool>(h, false));

    vector<pair<int, int>> level; level.push_back(start);
    visited[start.first][start.second] = true;
    int ans = -1;
    while (!level.empty()) {
        ans++;
        vector<pair<int, int>> next;
        for (pair<int, int> i : level) {
            if (i == end) {
                next.clear();
                break;
            }
            int x = i.first;
            int y = i.second;
            if (y > 0 && !visited[x][y-1] && maze[x][y-1] == '.') {
                next.push_back(pair<int, int>(x, y-1));
                visited[x][y-1] = true;
            }
            if (x < w-1 && !visited[x+1][y] && maze[x+1][y] == '.') {
                next.push_back(pair<int, int>(x+1, y));
                visited[x+1][y] = true;
            }
            if (y < h-1 && !visited[x][y+1] && maze[x][y+1] == '.') {
                next.push_back(pair<int, int>(x, y+1));
                visited[x][y+1] = true;
            }
            if (x > 0 && !visited[x-1][y] && maze[x-1][y] == '.') {
                next.push_back(pair<int, int>(x-1, y));
                visited[x-1][y] = true;
            }

        }
        level = next;
    }
    return ans;
}

void solve() {
    vector<pair<int, int>> roads;
    cin >> h >> w;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cin >> maze[j][i];
            if (maze[j][i] == '.') {
                roads.push_back(pair<int,int>(j,i));
            }
        }
    }


    int maxi = -1000000;
    for (int i = 0; i < roads.size()-1; i++) {
        for (int j = 0; j < roads.size(); j++) {
            int m = bfs(roads[i], roads[j]);
            if (m > maxi) {
                maxi = m;
            }
        }
    }

    cout << maxi;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    solve();

    return 0;
}
