#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

void bfs(int node, vector<vector<int>> &adj, set<vector<int>> &guild){
    queue<int> q;
    q.push(node);

    while(!q.empty()){
        int n = q.size();
        vector<int> cur;

        for(int i=0; i<n; ++i){
            int el = q.front();
            q.pop();

            cur.push_back(el);
            for(int i=0; i<adj[el].size(); ++i){
                q.push(adj[el][i]);
            }
        }

        sort(cur.begin(), cur.end());
        guild.insert(cur);
    }

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;

        vector<vector<int>> adj(n+1);

        for(int i=2; i<=n; ++i){
            int el; cin>>el;
            adj[el].pb(i);
        }

        set<vector<int>> guild;

        for(int i=1; i<=n; ++i) bfs(i, adj, guild);

        for(int i=1; i<=n; ++i){
            guild.insert({i});
        }

        cout<<guild.size()<<nl;
    }      
  
}