/*
ID: andrewy8
TASK: lamps
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

ifstream fin("lamps.in");
ofstream fout("lamps.out");

int N, C;
bitset<6> lamps(63);
unordered_set<int> ons;
unordered_set<int> offs;

void read() {
    fin >> N >> C;
    int on; fin >> on;
    while (on != -1) {
        ons.insert(on);
        fin >> on;
    }
    int off; fin >> off;
    while (off != -1) {
        offs.insert(off);
        fin >> off;
    }
    fin.close();
}

void print(unsigned long n) {
    bitset<6> lamps(n);
    int bit = 5;
    for (int i = 1; i <= N/6; i++) {
        fout << lamps;
    }
    for (int i = 0; i < N % 6; i++) {
        
        fout << int(lamps[bit]);
        bit--;
    }
    fout << "\n";
}

bool check() {
    for (const int& i : ons) {
        if (!lamps[(6 - (i % 6)) % 6]) {
            return false;
        }
    }
    for (const int& i : offs) {
        if (lamps[(6 - (i % 6)) % 6]) {
            return false;
        }
    }
    return true;
}

void one() {
    lamps.flip();
}

void two() {
    lamps.flip(5);
    lamps.flip(3);
    lamps.flip(1);
}

void three() {
    lamps.flip(4);
    lamps.flip(2);
    lamps.flip(0);
}

void four() {
    lamps.flip(5);
    lamps.flip(2);
}

void solve() {
    set<int> solutions;
    if (C == 0) {
        if (check()) {
            print(lamps.to_ulong());
        }
        else {
            fout << "IMPOSSIBLE\n";
        }
    }
    else if (C == 1) {
        bool solved = false;
        one();
        if (check()) {
            solutions.insert(lamps.to_ulong());
            solved = true;
        }
        one();
        two();
        if (check()) {
            solutions.insert(lamps.to_ulong());
            solved = true;
        }
        two();
        three();
        if (check()) {
            solutions.insert(lamps.to_ulong());
            solved = true;
        }
        three();
        four();
        if (check()) {
            solutions.insert(lamps.to_ulong());
            solved = true;
        } 
        if (!solved) {
            fout << "IMPOSSIBLE\n"; 
        }
    }
    else {
        bool solved = false;
        unordered_set<unsigned long> visited;
        for (int i = 0; i <= 15; i++) {
            if (i & 1) {
                one();
            }
            if (i & 2) {
                two();
            }
            if (i & 4) {
                three();
            }
            if (i & 8) {
                four();
            }
            if (check() && visited.count(lamps.to_ulong()) == 0) {
                solutions.insert(lamps.to_ulong());
                visited.insert(lamps.to_ulong());
                solved = true;
            }
            if (i & 1) {
                one();
            }
            if (i & 2) {
                two();
            }
            if (i & 4) {
                three();
            }
            if (i & 8) {
                four();
            }
        }
        if (!solved) {
            fout << "IMPOSSIBLE\n";
        }
    }
    for (const unsigned long& i : solutions) {
        print(i);
    }
}


int main() {
    read();
    solve();
    fout.close();
    return 0;
}