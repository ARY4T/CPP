#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n,m,k;

        cin>>n>>m>>k;

        if(k == 1) cout<<1<<nl;

        else if(k == 2) {
            ll ans = 0;
            ans += min(m, n-1);

            if(m>=n){
                ans += m/n;
            }
            cout<<ans<<nl;
        }

        else if(k == 3){
            ll ans = 0;
            if(m>n) ans += m- n -(m/n )+ 1;
            cout<<ans<<nl;
        }
        else cout<<0<<nl;
    }      
    return 0;   
}