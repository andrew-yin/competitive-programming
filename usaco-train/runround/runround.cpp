/*
ID: andrewy8
TASK: runround
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

ifstream fin("runround.in");
ofstream fout("runround.out");

unsigned long long M;

bool roundabout(unsigned long long M) {
    int n = int (log10(M) + 1);
    vector<int> digits(n, 0);

    unordered_set<int> past;
    for (int i = n - 1; i >= 0; i--) {
        int digit = M % 10;
        if (digit == 0 || past.count(digit) > 0) return false;
        digits[i] = digit;
        past.insert(digit);
        M /= 10;
    }

    unordered_set<int> visited;
    int cur = 0;
    for (int i = 0; i < n; i++) {
        int num = digits[cur];
        visited.insert(num);
        cur = (cur + (num % n)) % n;
    }

    return visited.size() == digits.size() && cur == 0;
}

int main() {
    fin >> M;
    fin.close();
    
    do {
        M++;
    }
    while (!roundabout(M));

    fout << M << "\n";
    fout.close(); 
    return 0;
}