    #include <bits/stdc++.h>
    using namespace std;
     
    void solve(){
    	int n, m;
    	cin >> n >> m;
    	if (n == 1 || m == 1){
    		cout << "YES\n";
    	}
    	else{
    		if (n >= 3 || m >= 3){
    			cout << "NO\n";
    		}
    		else{
    			cout << "YES\n";
    		}
    	}
    }
     
    int main(){
        ios::sync_with_stdio(0);
        cin.tie(0);
     
        int t;
        cin >> t;
        while(t--){
            solve();
        }
     
        return 0;
    }