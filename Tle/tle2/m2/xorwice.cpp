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

        ll c = a^b;
        cout<<c<<nl;
    }       
}