#include <bits/stdc++.h>
using namespace std;

void solve() {
	
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int five = 0;
    int seven = 0;
    
    int a;
    for (int i=0; i<3; i++){
    	cin >> a;
    	if (a == 5){
    		five++;
    	}
    	
    	if (a == 7){
    		seven++;
    	}
    }
    
    if (five == 2 && seven == 1){
    	cout << "YES";
    }
    else{
    	cout << "NO";
    }

    return 0;
}