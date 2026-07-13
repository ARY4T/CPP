#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n,l,r;
        cin>>n>>l>>r;
        vector<ll> v(n);
        for(auto &el:v) cin>>el;

        sort(v.begin(),v.end());

        long long totalPairs=0;

        for(int i =0; i<n; ++i){
            if(i == n-1) break;

            auto itLower = lower_bound(v.begin()+i+1, v.end(), l-v[i]);
            auto itUpper = upper_bound(v.begin()+i+1, v.end(), r-v[i]);

            totalPairs += distance(itLower,itUpper);
        }
        cout<<totalPairs<<nl;
        
    }
  
}