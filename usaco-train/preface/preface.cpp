/*
ID: andrewy8
TASK: preface
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> counts;

void roman(int i) {
    if (i >= 1000) {
        counts['M']++;
        roman(i - 1000);
    }
    else if (i >= 900) {
        counts['C']++;
        counts['M']++;
        roman(i - 900);
    } 
    else if (i >= 500) {
        counts['D']++;
        roman(i - 500);
    } 
    else if (i >= 400) {
        counts['C']++;
        counts['D']++;
        roman(i - 400);
    } 
    else if (i >= 100) {
        counts['C']++;
        roman(i - 100);
    } 
    else if (i >= 90) {
        counts['X']++;
        counts['C']++;
        roman(i - 90);
    } 
    else if (i >= 50) {
        counts['L']++;
        roman(i - 50);
    } 
    else if (i >= 40) {
        counts['X']++;
        counts['L']++;
        roman(i - 40);
    } 
    else if (i >= 10) {
        counts['X']++;
        roman(i - 10);
    }
    else if (i >= 9) {
        counts['I']++;
        counts['X']++;
        roman(i - 9); 
    }
    else if (i >= 5) {
        counts['V']++;
        roman(i - 5);
    }
    else if (i >= 4) {
        counts['I']++;
        counts['V']++;
        roman(i - 4);
    }
    else if (i >= 1) {
        counts['I']++;
        roman(i - 1);
    }
}

int main() {
    ifstream fin("preface.in");
    int n;
    fin >> n;
    for (int i=1; i<=n; i++) {
        roman(i);
    }
    ofstream fout("preface.out");
    char numerals[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    for (char i: numerals) {
        if (counts.find(i) != counts.end()) {
            fout << i << " " << counts[i] << "\n";
        }
    }
}