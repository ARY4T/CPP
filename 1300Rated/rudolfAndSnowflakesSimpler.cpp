#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    set<ll> st;

    for(int i=2; i<=1000; ++i){
        ll num = 1 + i;
        ll mult = i*i;
        for(int j=1; j<=20; ++j){
            num += mult;
            mult *= i;
            if(num > 1e6) break;
            st.insert(num);
        }
    }

    while(tc--){
        int n; cin>>n;
        
        if(st.find(n) == st.end()) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
        
    }      
  
}