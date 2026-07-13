#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,k;
        cin>>n>>k;

        if(k == 0) cout<<1;
        ll ans =1;
        ll mod = 1e9+7;

        for(int i = 0; i < k; ++i){
            ans = (ans * n) % mod;
        }

        cout<<ans<<nl;
    }      
  
}