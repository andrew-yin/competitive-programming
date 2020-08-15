class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        
        for (int j=0; j<nums.size(); j++) {
            int i = nums[j];
            if (nums[abs(i)-1] < 0) {
                ans.push_back(abs(i));
            }
            else {
                nums[abs(i)-1] = -nums[abs(i)-1];
            }
        }

        return ans;
    }
};
