/*
ID: andrewy8
TASK: holstein
LANG: C++                 
*/

#include <bits/stdc++.h>
using namespace std;

int v;
int reqs[26] = {0};

int g; 
int vitamins[16][26] = {{0}};

int min_scoops = 16;
vector<int> min_scoop_order;

vector<int> subset;


void solve() {
    int totals[26] = {0};
    for (int i : subset) {
        for (int j=1; j<=v; j++) {
            totals[j] += vitamins[i][j];
        }
    }

    cout << "Subset: "; 
    for (int i : subset) {
        cout << i << " ";
    }
    cout << "\nTotals: ";
    for (int i=1; i<=v; i++) {
        cout << totals[i] << " ";
    }
    cout << "\n\n";

    bool meets_condition = true;
    for (int i=1; i<=v; i++) {
        if (totals[i] < reqs[i]) {
            meets_condition = false;
            break;
        }
    }
    
    if (meets_condition) {
        min_scoops = subset.size();

        vector<int> sorted_subset = subset;
        sort(sorted_subset.begin(), sorted_subset.end());

        if (subset.size() < min_scoops) {
            min_scoops = subset.size();
            min_scoop_order = sorted_subset;
        }
        else {
            for (int i=1; i<=g; i++) {
                bool j = find(sorted_subset.begin(), sorted_subset.end(), i) != sorted_subset.end();
                bool k = find(min_scoop_order.begin(), min_scoop_order.end(), i) != min_scoop_order.end();
                if (j && !k) {
                    min_scoop_order = sorted_subset;
                    break;
                }
                else if (!j && k) {
                    break;
                }
            }
        }

    }
}

void generate_subs(int i) {
    if (i == g+1) {
        if (subset.size() <= min_scoops) {
            solve();
        }
    }
    else {
        generate_subs(i+1);
        subset.push_back(i);
        generate_subs(i+1);
        subset.pop_back();
    }
}

int main() {

    ifstream fin("holstein.in");

    fin >> v;
    for (int i=1; i<=v; i++) {
        fin >> reqs[i];
    }

    fin >> g;
    for (int i=1; i<=g; i++) {
        for (int j=1; j<=v; j++) {
            fin >> vitamins[i][j];
        }
    }

    generate_subs(1);

    ofstream fout("holstein.out");
    
    fout << min_scoops;
    for (int i : min_scoop_order) {
        fout << " " << i;
    }
    fout << "\n";

    return 0;
}