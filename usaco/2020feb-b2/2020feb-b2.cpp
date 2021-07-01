#include <bits/stdc++.h>
using namespace std;

int N;
string A, B;

void setIO(string s) {
    freopen((s+".in").c_str(),"r",stdin);
    freopen((s+".out").c_str(),"w",stdout);
}

int main() {
    setIO("breedflip");
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    cin >> N >> A >> B; 

    int curr_count = 0;
    int ans = 0;
    for (int i = 0; i < N; i++) {
        if (A[i] != B[i]) {
            curr_count++;
        }
        else {
            if (curr_count > 0) {
                ans++;
                curr_count = 0;
            }
        }
    }
    if (curr_count > 0) {
        ans++;
    }
    cout << ans << "\n";

    return 0;
}