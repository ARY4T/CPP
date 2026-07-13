#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        cin >> n >> k;
        
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        vector<int> sorted_a = a;
        sort(sorted_a.begin(), sorted_a.end());
        
        if(k == 1){
            if(a == sorted_a){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
            continue;
        }
        
        cout << "YES\n";
    }
    
    return 0;
}