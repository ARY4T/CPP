#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,q;
        cin>>n>>q;
        vector<ll> v(n);
        for(auto &el:v) cin>>el;

        vector<ll> prefixSum(n+1);

        for(int i=1;i<=n;++i){
            prefixSum[i] = prefixSum[i-1] + v[i-1];
        }

        vector<ll> maxHeights(n);
        maxHeights[0] = v[0];

        for(int i=1;i<n;++i){
            maxHeights[i] = max(maxHeights[i-1], v[i]);
        }

        while(q--){
            ll k;cin>>k;
            auto it = upper_bound(maxHeights.begin(), maxHeights.end(), k);
            int climbaleSteps = distance(maxHeights.begin(), it);
            cout<<prefixSum[climbaleSteps]<<" ";
        }
        cout<<nl;
    }      

}