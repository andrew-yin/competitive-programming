// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> uj, us;
        for (char i : jewels) {
            uj.insert(i);
        }
        for (char i : stones) {
            us.insert(i);
        }

        int ans = 0;
        for (char i : uj) {
            if (us.count(i) > 0) {
                ans++;
            }
        }
        return ans;
    }
};
