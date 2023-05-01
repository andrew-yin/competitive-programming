#include <bits/stdc++.h>
using namespace std;

void printLucky(int n){
    int lastDigit = n % 10;
    if (lastDigit == 4 || lastDigit == 7){
        if (n/10 == 0){
            cout << "YES";
            return;
        }
        printLucky(n/10);
    }
    else{
        cout << "NO";
        return;
    }
    return;
}

void solve() {
    string s;
    cin >> s;

    int count = 0;

    for (int i=0; i<s.length(); i++){
        if (s[i] == '4' || s[i] == '7'){
            count++;
        }
    }

    printLucky(count);
    return;
}

int main() {
    solve();
	return 0;
}
