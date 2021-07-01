#include <bits/stdc++.h>
using namespace std;

struct Cow {
    bool infected = false;
    int shakes = 0;
};

int N, T;

vector<Cow> cows(101, Cow());
vector<pair<int, pair<int, int>>> shakes;
vector<Cow> final(101, Cow());


void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("tracing");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N >> T;
    for (int i = 1; i <= N; i++) {
        char j; cin >> j;
        final[i].infected = j - '0';
    }

    for (int i = 0; i < T; i++) {
        int t, x, y; cin >> t >> x >> y;
        shakes.push_back(pair<int, pair<int, int>>(t, pair<int, int>(x, y)));
    }
    sort(shakes.begin(), shakes.end());
    
    for (auto i : shakes) {
        final[i.second.first].shakes++;
        final[i.second.second].shakes++;
    }

    int max_K = 0;
    for (int i = 1; i <= N; i++) {
        max_K = max(max_K, final[i].shakes);        
    }

    unordered_set<int> possibles;
    int zero = 0, smallest_K = INT_MAX, largest_K = -1;
    for (int k = 0; k <= max_K; k++) {
        for (int n = 1; n <= N; n++) {
            cows[n].infected = true;
            for (int t = 0; t < T; t++) {
                int x = shakes[t].second.first;
                int y = shakes[t].second.second;
                if (cows[x].infected) {
                    cows[x].shakes++;
                }
                if (cows[y].infected) {
                    cows[y].shakes++;
                }
                if (cows[x].infected && cows[x].shakes <= k) {
                    cows[y].infected = true;
                }
                if (cows[y].infected && cows[y].shakes <= k) {
                    cows[x].infected = true;
                }
            }
            bool possible = true;
            for (int i = 1; i <= N; i++) {
                if (cows[i].infected != final[i].infected) {
                    possible = false;
                    break;
                }
            }

            if (possible) {
                possibles.insert(n);
                smallest_K = min(smallest_K, k);
                largest_K = max(largest_K, k);
            }
            cows = vector<Cow>(101, Cow());
        }
    }

    cout << possibles.size() << " " << smallest_K << " ";
    if (largest_K == max_K) {
        cout << "Infinity";
    }
    else {
        cout << largest_K;
    }

    return 0;
}