#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

ll manhattanDistance(ll x1,ll y1, ll x2, ll y2){
    return abs(x1-x2) + abs(y1-y2);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n,m;
        cin>>n>>m;

        ll i,j;
        cin>>i>>j;

        ll maxDist = -1;

        vector<pair<ll,ll>> corners = {{1,1},{n,1},{1,m},{n,m}};
        pair<ll,ll> ans1;
        pair<ll,ll> ans2;

        for(auto [x1,y1]:corners){
            for(auto [x2,y2]:corners){
                ll currentPath = manhattanDistance(x1,y1,x2,y2) + manhattanDistance(i,j,x1,y1) + manhattanDistance(i,j,x2,y2);
                if(currentPath > maxDist){
                    maxDist = currentPath;
                    ans1 = {x1,y1};
                    ans2 = {x2,y2};
                }
            }
        }
        cout<<ans1.first<<" "<<ans1.second<<" "<<ans2.first<<" "<<ans2.second<<nl;
    }      
  
}