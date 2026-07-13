#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

vector<vector<int>> adj;
map<pair<int, int>, int> ind;
vector<int> dp;

void dfs(int v, int p){
    for(auto el: adj[v]){
        if(el == p) continue;

        if(ind[{p, v}] < ind[{v, el}]){
            dp[el] = dp[v];
        }
        else dp[el] = 1 + dp[v];

        dfs(el, v);
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        adj.clear();
        dp.clear();
        ind.clear();
        int n; cin>>n;

        adj.resize(n);
        dp.resize(n);

        for(int i=1; i<n; ++i){
            int u, v;
            cin>>u>>v;
            u--, v--;

            adj[u].pb(v);
            adj[v].pb(u);

            ind[{u, v}] = i;
            ind[{v, u}] = i;
        }

        dp[0] = 1;
        ind[{-1, 0}] = -1;

        dfs(0, -1);

        cout<<*max_element(dp.begin(), dp.end())<<nl;
    }      
  
}