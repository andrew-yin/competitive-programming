class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        vector<int> n(citations.size()+1);
        for (int i: citations) {
            if (i < citations.size()) {
                n[i]++;
            }
            else {
                n[citations.size()]++;
            }
        }

        int count = 0;
        for (int i=citations.size(); i>=1; i--) {
            count += n[i];
            if (count >= i) {
                return i;
            }
        }
        return 0;
    }
};
