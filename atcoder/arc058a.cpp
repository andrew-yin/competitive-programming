#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n >> k;

    int digits[10] = {false};
    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        digits[j] = true;
    }
	
    bool unsolved = true;
    while (unsolved) {
    	int m = n;
    	bool isSol = true;
        while (m > 0) {
            if (digits[m % 10]) {
            	isSol = false;
                break;
            }
            else {
                m /= 10;
            }
        }
        if (isSol){
        	cout << n;
        	unsolved = false;
        }
        m = n++;
    }

    return 0;
}