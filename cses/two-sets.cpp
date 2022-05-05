#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    vector<int> group1; vector<int> group2;
    int n; cin >> n;
    if (n % 4 == 1 || n % 4 == 2) {
        cout << "NO\n";
        return 0;
    }

    for (int i = n; i >= 4; i -= 4) {
        group1.push_back(i-3);
        group1.push_back(i);
        
        group2.push_back(i-2);
        group2.push_back(i-1);
    }

    if (n % 4 == 3) {
        group1.push_back(1);
        group1.push_back(2);

        group2.push_back(3);
    }

    cout << "YES\n";
    cout << group1.size() << "\n";
    for (int i : group1) {
        cout << i << " ";
    }
    cout << "\n" << group2.size() << "\n";
    for (int i : group2) {
        cout << i << " ";
    }

    return 0;
}
