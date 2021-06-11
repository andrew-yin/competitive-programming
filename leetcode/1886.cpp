// Author: Andrew Yin
// Date: Summer 202

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        if (mat == target) return true;
        rotateNinety(mat);
        if (mat == target) return true;
        rotateNinety(mat);
        if (mat == target) return true;
        rotateNinety(mat);
        if (mat == target) return true;
        return false;
    }

    void rotateNinety(vector<vector<int>>& mat) {
        vector<vector<int>> rotated(mat.size(), vector<int>(mat.size()));
        for (int i = 0; i < mat.size(); i++) {
            for (int j = 0; j < mat.size(); j++) {
                rotated[j][mat.size() - 1 - i] = mat[i][j];
            }
        }
        mat = rotated;
    }
};