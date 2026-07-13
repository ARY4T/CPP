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
        vector<string> grid(n);
        for(int i=0;i<n;++i){ cin >> grid[i];
        }
        int odd_row =0 ;
        
        for(int i=0;i<n;++i){
            int cnt = 0;
            for(int j=0;j<m;++j){
                cnt += (grid[i][j] == '1');
            }
            if(cnt%2) odd_row++;
        }      
        int odd_col=0;
        for(int j=0;j<m;++j){
            int cnt =0;
            for(int i=0;i<n;++i){
                cnt += (grid[i][j]=='1');
            }
            if(cnt%2) odd_col++;
        }
        cout<<max(odd_row,odd_col)<<nl;

   
    }
    return 0;   
}