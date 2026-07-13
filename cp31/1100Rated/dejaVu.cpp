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
        int q;cin>>q;

        vector<ll> a(n);
        for(auto &el:a)cin>>el;

        vector<ll> x(q);
        for(auto &el:x)cin>>el;

        int prev = 31;
        for(int i=0;i<q;++i){
            if(x[i] >=prev) continue;
            ll val = pow(2,x[i]);
            for(int j=0;j<n;++j){
                if(a[j]%val == 0) a[j] += val/2;
            }
            prev = x[i];
        }
        for(auto el:a) cout<<el<<" ";
        cout<<nl;
    }      
  
}