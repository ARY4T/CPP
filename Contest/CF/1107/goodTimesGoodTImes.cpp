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
        ll x; cin>>x;
        ll ans = 1;

        while(x){
            x/=10;
            ans*=10;
        }
        ans += 1;
        
        cout<<ans<<nl;
    }      
  
}