#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        int cur_size = 0;
        int max_size = 0;
        int min_size = n+1;

        int last_person;
        int person;
        for (int i=0; i<n; i++){
            cin >> person;
            if (i == 0){
                cur_size++;
            }
            else{
                if (person - last_person <= 2){
                    cur_size++;
                }
                else{
                    if (cur_size > max_size){
                        max_size = cur_size;
                    }
                    if (cur_size < min_size){
                        min_size = cur_size;
                    }
                    cur_size = 1;
                }
                
            }
            last_person = person;
        }
        if (cur_size > max_size){
            max_size = cur_size;
        }
        if (cur_size < min_size){
            min_size = cur_size;
        }
        cout << min_size << " " << max_size << "\n";
    }

    return 0;
}