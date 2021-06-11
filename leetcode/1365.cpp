// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        /*
        map<int,int> ct;
        for (int i = 0; i < nums.size(); i++) ct[nums[i]]++;
        
        unordered_map<int,int> less;
        bool first = true;
        int cumsum = 0;
        for (auto i = ct.begin(); i != ct.end(); i++) {
            if (first) {
                less[i->first] = 0;
                first = false;
            }
            else {
                less[i->first] = cumsum;
            }
            cumsum += i->second;
        }
        
        vector<int> sol(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            sol[i] = less[nums[i]];
        }
        return sol;
        */

        std::sort(nums.begin(), nums.end());
        unordered_map<int, int> less;
        less[nums[0]] = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i-1]) {
                less[nums[i]] = i;
            }
        }
        vector<int> sol(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            sol[i] = less[nums[i]];
        }
        return sol;
    }
};
