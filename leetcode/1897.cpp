#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool makeEqual(vector<string>& words) {
        unordered_map<char, int> count;
        for (string word: words) {
            for (char i : word) {
                count[i]++;
            }
        }

        for (auto i : count) {
            if (i.second % words.size()) {
                return false;
            }
        }
        return true;
    }
};