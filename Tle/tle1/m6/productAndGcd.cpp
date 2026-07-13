#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

ll power(ll g, ll n){
    ll pow = 1;
    for(int i=1;i<=n;++i){
        pow*=g;
        if(pow>1'000'000'000'000LL) return -1;
    }
    return pow;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        ll n,p;
        cin>>n>>p;
       
        if(n==1){
            cout<<p<<nl;
        }
        else if(n > 40){
            cout<<1 <<nl;
        }
        else{
            ll gcd = 1;
            for(int i=2;i<=1e6;++i){
                ll pow = power(i,n);
                if(pow == -1) break;
                if(p%pow == 0) gcd = i;
            }
            cout<<gcd<<nl;
        }

         

    }      
    return 0;   
}