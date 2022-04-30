#include <bits/stdc++.h>
#include <unordered_set>
using namespace std;

class Battleship {
    public:

    Battleship(vector<pair<int, int> > coords) {
        this->coords = coords;
    }

    vector< pair<int, int> > coords;
};

class OneBattleship {
    public:

    vector<string> hit(vector<string> grid) {
        int N = grid.size();
        vector<Battleship> potentials;        

        // search rows
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < grid[i].size()-3; j++) {
                if (grid[i][j] == '.' && grid[i][j+1] == '.' && grid[i][j+2] == '.') {
                    vector<pair<int, int> > coords(3);
                    coords[0].first = i; coords[0].second = j;
                    coords[1].first = i; coords[1].second = j+1;
                    coords[2].first = i; coords[2].second = j+2;
                    potentials.push_back(Battleship(coords));
                }
            }
        }

        // search columns
        for (int i = 0; i < grid[0].size(); i++) {
            for (int j = 0; j < N-3; j++) {
                if (grid[j][i] == '.' && grid[j+1][i] == '.' && grid[j+1][i] == '.') {
                    vector<pair<int, int> > coords(3);
                    coords[0].first = j; coords[0].second = i;
                    coords[1].first = j+1; coords[1].second = i;
                    coords[2].first = j+2; coords[2].second = i;
                    potentials.push_back(Battleship(coords));
                }
            }
        }

        unordered_set<int> shot;
        unordered_set<pair<int, int> > shots;
        for (int i = 0; i < potentials.size(); i++) {
            if (shot.count(i) == 0) {
                for (int j = 0; j < potentials.size(); j++) {
                    if (j != i) {
                        bool common = false;
                        pair<int, int> common_coord;
                        for (int k = 0; k < 3; k++) {
                            for (int l = 0; l < 3; l++) {
                                if (potentials[i].coords[k] == potentials[j].coords[l]) {
                                    common_coord = potentials[i].coords[k];
                                    common = true;
                                    break;
                                }
                            }
                        }
                        if (common) {
                            shots.insert(common_coord);
                            shot.insert(j);
                            shot.insert(i);
                            break;
                        }
                    }
                }
            }
            if (shot.count(i) == 0) {
                shots.insert(potentials[i].coords[0]);
            }
        }
        vector<string> result = grid;
        for (pair<int, int> i : shots) {
            result[i.first][i.second] = '*';
        }
        return result;
    }
};


.W.......