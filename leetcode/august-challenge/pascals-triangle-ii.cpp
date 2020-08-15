class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        ans.push_back(1);
        for (int i=1; i<=rowIndex; i++) {
            vector<int> curr;
            for (int j=0; j<=i; j++) {
                if (j == 0) {
                    curr.push_back(1);
                }
                else if (j == i) {
                    curr.push_back(1);
                }
                else {
                    curr.push_back(ans[j] + ans[j-1]);
                }
            }
            ans = curr;
        }
        return ans;
    }
};
