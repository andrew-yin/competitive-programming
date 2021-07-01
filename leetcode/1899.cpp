#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool a = false, b = false, c = false;
        for (int i = 0; i < triplets.size(); i++) {
            if (triplets[i][0] <= target[0] && triplets[i][1] <= target[1] && triplets[i][2] <= target[2]) {
                if (triplets[i][0] == target[0]) {
                    a = true;
                    cout << triplets[i][0] << " ";
                }
                if (triplets[i][1] == target[1]) {
                    b = true;
                    cout << triplets[i][1] << " ";
                }
                if (triplets[i][2] == target[2]) {
                    c = true;
                    cout << triplets[i][2] << " ";
                }
            }
        }
        return a && b && c;
    }
};