/*
ID: andrewy8
TASK: frac1
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ifstream fin("frac1.in");
    ofstream fout("frac1.out");

    int n;
    fin >> n;

    map<double, pair<int, int> > decimals;

    for (int i = 0; i <= n; i++) {
        for (int j=i+1; j<=n; j++) {
            double x = (double) i/j;
            if (decimals.find(x)  == decimals.end()) {
                decimals[x] = pair<int, int>(i, j);
            }
        }
    }

    for (auto i: decimals) {
        fout << i.second.first << "/" << i.second.second << "\n";
    }
    fout << "1/1\n";

    return 0;
}