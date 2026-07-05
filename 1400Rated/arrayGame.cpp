#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n, k;
        cin>>n>>k;

        vector<ll> v(n);
        for(int i=0; i<n; ++i) cin>>v[i];

        sort(v.begin(), v.end());

        if(k>=3){
            cout<<0<<nl;
        }
        
        else if(k == 1){
            ll ans = v[0];

            for(int i=0; i<n; ++i){
                for(int j=i+1; j<n; ++j){
                    ans = min(ans, abs(v[j]-v[i]));
                }
            }

            cout<<ans<<nl;
        }
        else{
            ll ans = v[0];

            for(int i=0; i<n; ++i){
                for(int j=i+1; j<n; ++j){
                    ll diff = v[j]-v[i];
                    ans = min(ans, diff);

                    auto it = lower_bound(v.begin(), v.end(), diff);

                    if(it != v.end()){
                        ans = min(ans, (*it)-diff);
                    }
                    if(it != v.begin()){
                        ans = min(ans, diff - *(it-1));
                    }
                    
                }
            }


            cout<<ans<<nl;
        }
    }      
  
}