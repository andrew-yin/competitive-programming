#include <bits/stdc++.h>
using namespace std;

vector<array<int, 101>> emp;
int n, m;
int edges = 0;

void dfs(array<int, 101> p){
	for (int i=0; i<n; i++){
		if (!emp[i][0]){
			for (int j=1; j<=m; j++){
				if (emp[i][j] == 1 && p[j] == 1){
					edges++;
					emp[i][0] = 1;
					dfs(emp[i]);
					break;
				}
			}
		}
	}
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for (int i=0; i<n; i++){
    	int a;
    	cin >> a;
    	array<int, 101> lang = {0};
    	for (int j=0; j<a; j++){
    		int k;
    		cin >> k;
    		lang[k] = 1;
    	}
    	emp.push_back(lang);
    }
    
    bool learned = false;
    for (auto i: emp){
    	for (auto j: i){
    		if (j != 0){
    			learned = true;
				break;
    		}
    	}
    }
    
    int comp = 0;
    for (int i=0; i<n; i++){
    	if (!emp[i][0]){
    		emp[i][0] = 1;
    		dfs(emp[i]);
    		comp++;
    	}
    }
    
    if (learned){
    	cout << comp-1;
    }
    else{
    	cout << comp;
    }

    return 0;
}