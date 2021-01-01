class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;
        sort(intervals.begin(), intervals.end());
        
        if (intervals.size() < 2) {
            return 0;
        }
        
        int end = intervals[0][1];
        int ans = 0;
        for (int i=1; i<intervals.size(); i++) {
            if (end > intervals[i][0]) {
                if (end > intervals[i][1]) {
                    end = intervals[i][1];
                }
                ans++;
            }
            else {
                end = intervals[i][1];
            }
        }
        return ans;
    }
};
