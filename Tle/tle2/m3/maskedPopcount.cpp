#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
#define mod (ll)(998244353)
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        ll n, m;
        cin>>n>>m;
        ll ans = 0;

        for(int i=0;i<60;++i){
            if(m & (1LL<<i)){
                ll cnt = n>>(i+1);
                cnt *= (1LL<<i);
                cnt %= mod;
                if(n & (1LL<<i)){
                    cnt += (n%(1LL<<i) + 1);
                    cnt %= mod;
                }
                
                ans += cnt;
                ans %= mod;
            }
        }
        cout<<ans;
        
    }      
    return 0;   
}