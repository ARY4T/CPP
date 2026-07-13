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
        vector<string> v(n);

        for(auto &el:v) cin>>el;

        bool possible = false;
        if(v[0][0] == v[n-1][m-1] or v[0][m-1] == v[n-1][0]) possible = true;

        if(!possible){
            if(v[0][0] == v[0][m-1]){
                for(int j=0;j<m-2;++j){
                    if(v[0][j] != v[0][j+1] or v[n-1][j] != v[n-1][j+1]) possible = true;
                }
            }
            else{
                for(int i=0;i<n-2;++i){
                    if(v[i][0] != v[i+1][0] or v[i][m-1] != v[i+1][m-1]) possible = true;
                }
            }
        }

        if(possible) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

    }     
}