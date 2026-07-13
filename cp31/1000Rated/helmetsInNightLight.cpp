#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,p;
        cin>>n>>p;

        vector<int> reach(n);
        vector<int> cost(n);
        for(auto &el:reach)cin>>el;
        for(auto &el:cost)cin>>el;

        multimap<int,int> mpp;
        for(int i=0;i<n;++i){
            mpp.insert({cost[i], reach[i]});
        }
        ll sum = p;
        int residents = n-1;

        for(auto [cost, reach]:mpp){
            if(cost<p ){
                if(residents-reach>=0){
                    sum += 1LL*reach*cost;
                    residents -= reach;
                }
                else {
                    sum += 1LL*residents*cost;
                    residents = 0;
                    break;
                }
            }
            else break;
        }

        if(residents > 0) sum += 1LL*residents*p;

        cout<<sum<<nl; 
    }       
}