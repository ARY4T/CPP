#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n, k;
        cin>>n>>k;

        vector<ll> req(n);
        for(auto &el: req) cin>>el;

        ll maxEl = *max_element(req.begin(), req.end());

        ll maxPowerk = 1;
        while(maxPowerk < maxEl){
            maxPowerk *= k;
        }
        bool ans = true;

        while(maxPowerk > 0){
            int cnt = 0;
            
            for(int i=0; i<n; ++i){
                if(req[i] >= maxPowerk) {
                    req[i] -= maxPowerk;
                    cnt++;
                }
            }
            if(cnt>1) {
                ans = false;
                break;
            }
            maxPowerk /= k;
        }

        if(ans){
            int maxEl = *max_element(req.begin(), req.end());

            if(maxEl == 0) cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
        else cout<<"NO"<<nl;
    }      
  
}