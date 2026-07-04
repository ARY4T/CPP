#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

int root(int x){
    ll l = 0,r = x;
    while(l<=r){
        ll m = (l+r)>>1;

        m*m<x? l=m+1:r=m-1;
    }
    return l;
}

vector<int> val;
vector<vector<int>> adj;
ll ans = 0;
ll n;

int dfs(int node, int parent){
    vector<int> subtree;

    for(int i=0; i<adj[node].size(); ++i){
        if(parent != adj[node][i]){
            subtree.pb(dfs(adj[node][i], node));
        }
    }
    int r = root(val[node]);
    ll sum1 = 0, sum2 = 0;

    if(r*r == val[node]){
        for(auto el: subtree){
            ans += el*sum2;
            sum2 += el*sum1;
            sum1 += el;
        }

        ans += ((n - sum1)* sum2);
        ans += ((n - sum1 - 1)* sum1);
    }

    return accumulate(subtree.begin(), subtree.end(), 0LL) + 1;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        cin>>n;

        val.clear();
        adj.assign(n, vector<int>());
        ans = 0;

        for(int i=0; i<n; ++i){
            int el;
            cin>>el;
            val.pb(el);
        }

        for(int i=0; i<n-1; ++i){
            int u, v;
            cin>>u>>v;
            u--, v--;
            adj[u].pb(v);
            adj[v].pb(u);
        }

        dfs(0, -1);
        cout<<ans<<nl;
    }      
  
}