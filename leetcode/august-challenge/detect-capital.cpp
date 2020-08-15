class Solution {
public:
    bool detectCapitalUse(string word) {
        return (allCaps(word) || noCaps(word) || firstCaps(word));
    }

    bool allCaps(string word) {
        for (char i: word){
            if ((int) i > 90){
                return false;
            }
        }
        return true;
    }
    
    bool noCaps(string word) {
        for (char i: word){
            if ((int) i <= 90){
                return false;
            }
        }
        return true;
    }

    bool firstCaps(string word) {
        if ((int) word[0] <= 90){
            for (int i=1; i<word.size(); i++){
                if ((int) word[i] <= 90){
                    return false;
                }
            }
            return true;
        }
        else {
            return false;
        }
    }
};
