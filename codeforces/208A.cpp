#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
   
    vector<string> ans;
    string word = "";
    int i=0;
    while(i< s.length()){
        if (s.substr(i,3) == "WUB"){
            if (word != ""){
                ans.push_back(word);
                word = "";
            }
            i += 3;
        } 
        else {
            word.push_back(s[i]);
            i++;
        }
    }
    
    if (word != ""){
        ans.push_back(word);
    }
    for (string i: ans){
        cout << i << " ";
    }

    return;
}

int main() {
	solve();
	return 0;
}
