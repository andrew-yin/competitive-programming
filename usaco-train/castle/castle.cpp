/*
ID: andrewy8
TASK: castle
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

ifstream fin("castle.in");
ofstream fout("castle.out");

int W = 1;
int N = 2;
int E = 4;
int S = 8;

int m, n;
int castle[51][51] = {{0}};
int comp[51][51] = {{0}};
int sizes[50*50+1] = {0};

void find_comp(int i, int j, int comp_num) {
    comp[i][j] = comp_num;
    sizes[comp_num]++;

    if ((i-1 > 0) && (comp[i-1][j] == 0) && !(castle[i][j] & N)) {
        find_comp(i-1, j, comp_num);
    }

    if ((i+1 <= n) && (comp[i+1][j] == 0) && !(castle[i][j] & S)) {
        find_comp(i+1, j, comp_num);
    }

    if ((j-1 > 0) && (comp[i][j-1] == 0) && !(castle[i][j] & W)) {
        find_comp(i, j-1, comp_num);
    }

    if ((j+1 <= m) && (comp[i][j+1] == 0) && !(castle[i][j] & E)) {
        find_comp(i, j+1, comp_num);
    }
}

void solve() {
    int comp_num = 0;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            if (comp[i][j] == 0) {
                comp_num++;
                find_comp(i, j, comp_num);
            }
        }
    }
    fout << comp_num << "\n";

    int max_size = -1;
    for (int i=1; i <= comp_num; i++) {
        if (sizes[i] > max_size) {
            max_size = sizes[i];
        }
    }
    fout << max_size << "\n";

    int max_x = -1;
    int max_y = -1;
    char dir = ' ';
    int max_merged_size = -1;
    for (int j=0; j<=m; j++) {
        for (int i=n; i>=1; i--) {
            if ((i-1 > 0) && (castle[i][j] & N) && (comp[i][j] != comp[i-1][j])) {
                int merged_size = sizes[comp[i][j]] + sizes[comp[i-1][j]];  
                if (merged_size > max_merged_size) {
                    max_x = j;
                    max_y = i;
                    dir = 'N';
                    max_merged_size = merged_size;
                }
            }

            if ((j + 1 <= m) && (castle[i][j] & E) && (comp[i][j] != comp[i][j+1])) {
                int merged_size = sizes[comp[i][j]] + sizes[comp[i][j+1]];  
                if (merged_size > max_merged_size) {
                    max_x = j;
                    max_y = i;
                    dir = 'E';
                    max_merged_size = merged_size;
                }
            }
        }
    }

    fout << max_merged_size << "\n";
    fout << max_y << " " << max_x << " " << dir << endl;
}

int main() {
    fin >> m >> n;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=m; j++) {
            fin >> castle[i][j];
        }
    }

    solve();
    return 0;
}