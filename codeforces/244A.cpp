#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n = 0, k = 0;
    cin >> n >> k;
    int want[n*k+1];
    for (int i=0; i<n*k+1; i++){
        want[i] = 0;
    }
    vector<int> c;
    int a;
    for (int i=0; i<k; i++){
        cin >> a;
        want[a] = 1;
        c.push_back(a);        
    }
    
    int curr = 1;
    for (int i=0; i<k; i++){
        cout << c[i] << " ";
        int count = 0;
        while (count < n-1){
            if (want[curr] == 0){
                cout << curr << " "; 
                count++;
            }
            curr++;
        }
        cout << "\n";
    }
}

int main() {
    solve();
	return 0;
}
