class CombinationIterator {
public:
    CombinationIterator(string characters, int combinationLength) {
        chars = characters;
        length = combinationLength;
        generate();
    }
    
    string next() {
        string toReturn = combos.front();
        combos.pop();
        return toReturn;
    }
    
    bool hasNext() {
        return !combos.empty(); 
    }

private:
    string chars;
    int length;
    queue<string> combos;

    void generate() {
        generate("", 0);
    }

    void generate(string subcombo, int n) {
        if (subcombo.size() == length) {
            combos.push(subcombo);
            return;
        }
        for (int i=n; i<chars.size(); i++) {
            subcombo.push_back(chars[i]);
            generate(subcombo, i+1);
            subcombo.erase(subcombo.length()-1);
        }        
    }
};

/**
 * Your CombinationIterator object will be instantiated and called as such:
 * CombinationIterator* obj = new CombinationIterator(characters, combinationLenth);
 * string param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
