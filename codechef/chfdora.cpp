#include <bits/stdc++.h>

using namespace std;



int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        int n, m;
        cin >> n >> m;  
        int ans = 0;
        int a[n][m];
        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                cin >> a[i][j];
            }
        }

        for (int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                bool counting = true;
                int length = 0;
                while (counting){
                    if (i-length < 0 || i+length > n-1 || j-length < 0 || j+length > m-1){
                        counting = false;
                    }
                    else{
                        if (a[i+length][j] == a[i-length][j] && a[i][j+length] == a[i][j-length]){
                            ans++;
                            length++;
                        }
                        else{
                            counting = false;
                        }
                    }
                }
            }
        } 
        cout << ans << "\n";
    }
    return 0;
}