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
        vector<ll> v(n);
        for(auto &el:v) cin>>el;

        int ans = 0;
        for(int i=0;i<n;++i){
            ans = gcd(ans, abs(v[i] - v[n-i-1]));
        }
        cout<<ans<<nl;
    }      
  
}