#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll a,b;
        cin>>a>>b;

        if(a==b) cout<<0<<" "<<0<<nl;
        else{
            if(b>a) swap(a,b);
            ll gcd = a-b;
            ll ops = min(a%gcd,gcd-a%gcd);
            cout<<gcd<<" "<<ops<<nl;
        }
    }      
  
}