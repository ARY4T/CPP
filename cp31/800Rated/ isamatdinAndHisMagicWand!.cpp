#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;
        vector<ll> v(n);

        int odd = 0;
        int even = 0;
        
        for(auto &el:v) {

            cin>>el;
            if(el&1) odd++;
            else even++;
        }
        
        if(odd == 0 || even == 0){
            for(auto &el:v) cout<<el<<" ";
        }
        else{
            sort(v.begin(), v.end());
            for(auto &el:v) cout<<el<<" ";
        }
        cout<<nl;

    }      
  
}