class WordDictionary {
public:
    /** Initialize your data structure here. */
    WordDictionary() {
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
       n[word.size()].push_back(word); 
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
       for (string i: n[word.size()]) {
           bool match = true;
           for (int j=0; j<word.size(); j++) {
                if (word[j] == '.') {
                   continue;
                }
                else if (word[j] != i[j]) {
                    match = false;
                    break;
                }
           }
           if (match) {
               return true;
           }
       }
       return false;
    }

private:
    unordered_map<int, vector<string>> n;
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
