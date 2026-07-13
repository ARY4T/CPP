#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int x, n;
        cin>>x>>n;
        if(n&1) cout<<x<<nl;
        else cout<<0<<nl;
    }      
  
}