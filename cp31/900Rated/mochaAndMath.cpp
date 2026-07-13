#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n;cin>>n;
        vector<ll> v(n);

        for(auto &el:v) {
            cin>>el;
        }
        ll an = v[0] ;

        for(int i=1; i<n;++i){
            an &= v[i];
        }
        cout<<an<<nl;
    }      
  
}