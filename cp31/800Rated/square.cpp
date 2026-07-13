#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a!=b || b!=c || c!=d || d!=a) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
    }      
  
}