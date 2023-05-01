#include <bits/stdc++.h>

using namespace std;

void solve(){
    string f, s, e;
    cin >> f >> s >> e;
    f += s;
    sort(f.begin(), f.end());
    sort(e.begin(), e.end());

    if (f == e){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    solve();

    return 0;
}