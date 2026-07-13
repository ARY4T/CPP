#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;


ll ceilDivision(ll a, ll b){
    return (a+b-1)/b;
} 

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll x,y,k;
        cin>>x>>y>>k;

        ll trades = 0;
        ll sticksNeeded = k*y+k-1;

        trades+= k;
        trades+= ceilDivision(sticksNeeded, x-1);

        cout<<trades<<nl;

    }      
  
}