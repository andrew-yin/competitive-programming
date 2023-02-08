#include <bits/stdc++.h>
using namespace std;
using ll = long long;

double eps = 1e-6;
int n;
vector<pair<int, int>> person;

bool reachable(double time) {
    double l = 0; double r = 1e10;
    for (int i = 0; i < n; i++) {
        l = max(l, (double) person[i].first - person[i].second*time);
        r = min(r, (double) person[i].first + person[i].second*time);
    }
    return r - l > eps;
}

void solve() {
    cin >> n;
    person.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> person[i].first;
    }
    for (int i = 0; i < n; i++) {
        cin >> person[i].second;
    }
    sort(person.begin(), person.end());

    double low = 0; double high = 1e9;
    while (high - low > eps) {
        double mid = low + (high-low)/2;
        if (reachable(mid)) {
            high = mid;
        }
        else {
            low = mid;
        }
    }
    cout.precision(7);
    cout << (low > high ? -1 : low) << "\n";
}


int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}
