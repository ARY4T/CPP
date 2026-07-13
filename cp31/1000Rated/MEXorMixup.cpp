#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int xorVal(ll n){
    if(n%4 == 0) return n;
    if(n%4 == 1) return 1;
    if(n%4 == 2) return n+1;
    if(n%4 == 3) return 0;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll a,b;
        cin>>a>>b;
        ll xorArr = xorVal(a-1);

        if(xorArr == b) cout<<a;
        else if((xorArr^b) != a) cout<<a+1;
        else cout<<a+2;

        cout<<nl;
    }      
  
}