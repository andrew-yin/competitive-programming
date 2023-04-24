#include <bits/stdc++.h>
using namespace std;

int ct = 0;
string s;
int moves[48];
int valid[9][9];

// U, D, L, R;
int r_dir[] = {-1, 1, 0 ,0};
int c_dir[] = {0, 0, -1, 1};

void dfs(int r, int c, int move) {
    if (move == 48) {
        ct += (r == 7 && c == 1) ? 1 : 0;
        return;
    }
    
    // early
    if (r == 7 && c == 1) {
        return;
    }

    // split L/R case
    if (valid[r-1][c] && valid[r+1][c] && !valid[r][c+1] && !valid[r][c-1]) {
        return;
    }

    // split U/L case
    if (!valid[r-1][c] && !valid[r+1][c] && valid[r][c+1] && valid[r][c-1]) {
        return;
    }

    valid[r][c] = false;
    if (s[move] != '?') {
        int i = s[move] == 'U'
                ? 0
                : s[move] == 'D'
                ? 1
                : s[move] == 'L'
                ? 2
                : 3;
        int next_r = r + r_dir[i];
        int next_c = c + c_dir[i];
        
        if (valid[next_r][next_c]) {
            dfs(next_r, next_c, move+1);
        }
    }
    else {
        for (int i = 0; i < 4; i++) {
            int next_r = r + r_dir[i];
            int next_c = c + c_dir[i];
            
            if (valid[next_r][next_c]) {
                dfs(next_r, next_c, move+1);
            }
        }
    }
    valid[r][c] = true;
}

int main() {
    cin >> s;

    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 7; j++) {
            valid[i][j] = true;
        }
    }
    for (int i = 0; i < 48; i++) {
        if (s[i] == 'U') {
            moves[i] = 0;
        }
        else if (s[i] == 'D') {
            moves[i] = 1; 
        }
        else if (s[i] == 'L') {
            moves[i] = 2;
        }
        else {
            moves[i] = 3;
        }
    }

    dfs(1, 1, 0);
    cout << ct << "\n";
    return 0;
}