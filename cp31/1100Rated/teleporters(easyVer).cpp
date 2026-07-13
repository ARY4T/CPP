#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n, c;
        cin>>n>>c;

        vector<ll> costs(n);
        for(auto &el:costs) cin>>el;

        vector<int> totalCost(n);

        for(int i=0; i<n; ++i){
            totalCost[i] = costs[i] + (i+1);
        }

        sort(totalCost.begin(), totalCost.end());

        int teleporations = 0;
        for(int i=0; i<n; ++i){
            if(totalCost[i] <= c) {
                teleporations++;
                c -= totalCost[i];
            }
            else break;
        }

        cout<<teleporations<<nl;
    }      
  
}