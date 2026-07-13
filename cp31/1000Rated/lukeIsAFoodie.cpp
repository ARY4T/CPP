#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n;cin>>n;
        ll x;cin>>x;

        vector<ll> v(n);
        for(auto &el:v)cin>>el;

        vector<pair<ll,ll>> segments(n);
        for(int i=0;i<n;++i) segments[i] = {v[i]-x, v[i] + x};


        ll ans = 0;
        ll l = segments[0].first;
        ll r = segments[0].second;
        
        for(int i=1;i<n;++i){
            l = max(l, segments[i].first);
            r = min(r, segments[i].second);
            if(l>r){
                ans++;
                l = segments[i].first;
                r = segments[i].second;
            }
        }
        cout<<ans<<nl;
    }      
  
}