/*
ID: andrewy8
TASK: sort3
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("sort3.in");
    ofstream fout("sort3.out");

    int n;
    fin >> n;
    
    int a[n];
    int counts[4] = {0};

    for (int i=0; i<n; i++) {
        fin >> a[i];
        counts[a[i]]++;
    }

    int a_sorted[n];
    for (int i=0; i<counts[1]; i++) {
        a_sorted[i] = 1;
    } 
    for (int i=counts[1]; i<counts[1]+counts[2]; i++) {
        a_sorted[i] = 2;
    }
    for (int i=counts[1]+counts[2]; i<counts[1]+counts[2]+counts[3]; i++) {
        a_sorted[i] = 3;
    }

    int misplaced = 0;
    for (int i=0; i<n; i++) {
        if (a[i] != a_sorted[i]) {
            misplaced++;
        }
    }
    
    unordered_set<int> visited;
    int ans = 0;
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if ((visited.find(i) == visited.end()) && (visited.find(j) == visited.end()) && a[i] != a[j] && a[i] != a_sorted[i] && a[j] != a_sorted[j] && a[i] == a_sorted[j] && a[j] == a_sorted[i]) {
                ans++;
                misplaced -= 2;
                visited.insert(i);
                visited.insert(j);
            }
        }
    }

    ans += misplaced/3 * 2;
    fout << ans << "\n";

    return 0;
}