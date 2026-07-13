#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{};cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        bool run = true;
        if(m%2!=0){
            cout<<"NO"<<endl;
            run = false;
        }
        vector<vector<vector<int>>> tiles(n,vector<vector<int>>(2,vector<int>(2)));
        for(int i=0;i<n;++i){
            for(int row=0;row<2;++row){
                for(int column=0;column<2;++column){
                    cin>>tiles[i][row][column];
                }
            }
        }
        if(!run) continue;
        bool feasible=false;
        for(auto tile:tiles){
            if(tile[0][1]==tile[1][0]){
                feasible = true; break;
            }
        }
        if(feasible) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }          
}