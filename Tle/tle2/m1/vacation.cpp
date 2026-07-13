#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n,m;
    cin>>n>>m;

    vector<vector<int>> v(n+1,vector<int>(m+1));

    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j)
            cin>>v[i][j];
    }

    vector<vector<int>> prefixSum(n+1,vector<int>(m+1));
  
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            prefixSum[i][j] += prefixSum[i-1][j] + prefixSum[i][j-1] - prefixSum[i-1][j-1];

            if(v[i][j] == 0) prefixSum[i][j]+=1;
        }
    }
    int q;cin>>q;
    while(q--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        ll zeroCount = prefixSum[x2][y2]-prefixSum[x1-1][y2]-prefixSum[x2][y1-1]+prefixSum[x1-1][y1-1];
        if(zeroCount > 0) cout<<0<<nl;
        else cout<<1<<nl;
        
    }
}