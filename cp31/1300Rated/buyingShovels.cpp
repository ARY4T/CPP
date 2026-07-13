#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n,k;
        cin>>n>>k;
        if(n<=k){
            cout<<1<<nl;
        }

        else
        {    
            vector<ll> d;
            vector<ll> d2;

            for(ll i=1; i*i<=n; ++i){
                if(n%i == 0){
                    d.push_back(i);
                    if(i != n/i)
                    d2.push_back(n/i);
                }
            }

            for(int i=d2.size()-1; i>=0;--i){
                d.push_back(d2[i]);
            }

            ll ans = upper_bound(d.begin(), d.end(), k)-d.begin();

            cout<<n/d[ans-1]<<nl;
        }
    }      
  
}