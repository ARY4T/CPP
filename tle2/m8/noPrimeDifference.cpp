#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,m;
        cin>>n>>m;

        vector<vector<int>> ans(n, vector<int> (m));
        int cnt = 1;

        for(int i=1; i<n; i+=2){
            for(int j=0; j<m; ++j){
                ans[i][j] = cnt;
                cnt++;
            }
        }

        for(int i=0; i<n; i+=2){
            for(int j=0; j<m; ++j){
                ans[i][j] = cnt;
                cnt++;
            } 
        }

        for(int i=0; i<n; ++i){
            for(int j=0; j<m; ++j){
                cout<<ans[i][j]<<" ";
            }
            cout<<nl;
        }
        cout<<nl;
    }      
  
}