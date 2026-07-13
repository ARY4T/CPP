#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n; cin>>n;
        vector<ll> ans;

        for(int k=1; k<=18; ++k){
            int power = k;
            ll divisor = 1;
            while(power--){
                divisor *= 10;
            }
            divisor++;

            if(n%divisor == 0) ans.push_back(n/divisor);
        }
        if(ans.size() == 0) cout<<0<<nl;
        else{
            cout<<ans.size()<<nl;
            for(int i=ans.size()-1; i>=0; --i){
                cout<<ans[i]<<" ";
            }
            cout<<nl;
        }
    }      
  
}