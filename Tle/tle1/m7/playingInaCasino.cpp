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
        vector<vector<int>> v(n,vector<int>(m));
        
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cin>>v[i][j];
            }
        }

        vector<vector<int>> cols(m, vector<int>(n));

        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                cols[j][i] = v[i][j];
            }
        }

        ll ans=0;

        for(auto &el:cols){
            sort(el.begin(),el.end());
            for(int i=0;i<=n-1;++i){
                ans += 1LL*i*el[i] - 1LL*(n-1-i)*el[i];
            }
        }
        cout<<ans<<nl;
    }      
    return 0;   
}