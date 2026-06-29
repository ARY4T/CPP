#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

ll mod = 998244353;

ll binpow(ll a, ll b){
    int res = 1;
    a %= mod;

    while(b > 0){
        if(b&1) res = (res*a)%mod;
        a = (a*a)%mod;
        b >>= 1;
    }
    return res;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n, m, r, c;
        cin>>n>>m>>r>>c;    

        ll free = (r-1)*m + (c-1)*n - (r-1)*(c-1);

        cout<<binpow(2, free)<<nl;
    }      
  
}