// Author: Andrew Yin
// Date: Summer 2021

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i-1]) {
                ans += nums.size() - i;
            }
        }
        return ans;
    }
};