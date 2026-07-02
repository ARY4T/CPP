#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

void dfs(int node, int parent, vector<int> &height, vector<vector<int>> &adj, int &ans){
    int mx = 0;
    int smx = 0;

    for(auto u: adj[node]){
        if(u == parent) continue;

        dfs(u, node, height, adj, ans);
        int x = height[u]+1;

        if(x>mx) {
            smx = mx;
            mx = x;
        }
        else smx = max(smx, x);
    }

    height[node] = mx;
    ans += smx+1;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;
        vector<vector<int>> adj(n);

        for(int i=1; i<n; ++i){
            int p; cin>>p;
            p--;
            adj[i].push_back(p);
            adj[p].push_back(i);
        }

        vector<int> height(n);

        int ans = 0;
        dfs(0, -1, height, adj, ans);

        cout<<ans<<nl;
    }      
  
}