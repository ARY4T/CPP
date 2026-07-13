#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n, m;
        cin>>n>>m;

        vector<int> k(n);
        for(int i=0; i<n; ++i) cin>>k[i];

        vector<int> cost(m);
        for(int i=0; i<m; ++i) cin>>cost[i];

        vector<int> costFriend(n);

        for(int i=0; i<n; ++i){
            costFriend[i] = cost[k[i]-1];
        }

        sort(costFriend.rbegin(), costFriend.rend());

        sort(cost.begin(), cost.end());


        int i=0; 
        while(i<m && i<n){
            if(cost[i] > costFriend[i]){
                break;
            }

            costFriend[i] = cost[i];
            i++;
        }

        cout<< accumulate(costFriend.begin(), costFriend.end(), 0LL)<<nl;
    }      
  
}