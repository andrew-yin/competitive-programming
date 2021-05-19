/*
ID: andrewy8
TASK: hamming
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;


int main() {
    ifstream fin("hamming.in");

    int n, b, d;
    fin >> n >> b >> d;

    int max = 1 << b;
    cout << max;

    vector<int> sol;
    sol.push_back(0);

    for (int i=1; i<max; i++) {
        if (sol.size() < n) {
            bool valid_hamming = true;
            for (int j: sol) {
                int k = i ^ j;
                int dist = 0;
                while (k > 0) {
                    dist += k & 1;
                    k >>= 1;
                }

                if (dist < d) {
                    valid_hamming = false;
                    break;
                }
            }
            if (valid_hamming) {
                sol.push_back(i);
            }
        }
        else {
            break;
        }
    }

    ofstream fout("hamming.out");
    fout << sol[0];
    int line_count = 1;
    for (int i=1; i<sol.size(); i++) {
        if (line_count != 0) {
            fout << " ";
        }
        fout << sol[i];
        line_count++;
        if (line_count == 10){
            fout << "\n";
            line_count = 0;
        }
    }
    if (line_count != 0) {
        fout << "\n";
    }

    return 0;
}