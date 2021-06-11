/*
ID: andrewy8
TASK: subset 
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

long long n;
long long buckets[391] = {0};


int main() {
    ifstream fin("subset.in");
    ofstream fout("subset.out");

    fin >> n; fin.close();
    long long sum = n * (n + 1) / 2;
    if (sum % 2) {
        fout << "0\n";
        fout.close();
        return 0;
    }

    sum /= 2;
    buckets[0] = 1;
    for (long long i = 1; i <= n; i++) {
        for (long long j = sum; j >= i; j--) {
            buckets[j] += buckets[j - i];
        }
    }
    fout << buckets[sum]/2 << "\n";
    fout.close();

    return 0;
}