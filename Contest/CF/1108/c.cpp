#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    int mod = 1e9+7;

    while(tc--){
        int n; cin>>n;
        vector<int> v(n);
        map<int, int> mp;

        ll oneDif = 0;

        for(int i=0; i<n; ++i) {
            cin>>v[i];

            if(i != 0 && v[i] == v[i-1]+1){
                oneDif++;
            }

            mp[v[i]]++;
              
        }

        ll ans = 1;

        ll p = 1;

        for(auto [el, cnt]: mp){  
            p = (p*expo(2,cnt-1, mod))%mod;
        }
        
        ans = p%mod;
        
        if(v[0] == -1)
        ans = (ans + (oneDif*p)%mod)%mod;

        cout<<ans<<nl;
        
    }      
  
}