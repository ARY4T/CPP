#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int min_operation(string n, string possible_value){
    int operations = 0;
    int checkerIndex = possible_value.size()-1;
    for(int i = n.size()-1; i>=0; i--){
        if(n[i] == possible_value[checkerIndex]){
            checkerIndex--;
            if(checkerIndex<0) break;
        }
        else operations++;
    }

    if(checkerIndex>=0) operations = INT_MAX;
    return operations;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        string n;cin>>n;
        vector<string> possible_values = {"00", "25", "50", "75"};
        int ans = INT_MAX;
        for(auto possible_value : possible_values){
            ans = min(ans, min_operation(n,possible_value));
        }
        cout<<ans<<nl;
        
    }      
  
}