#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    bool neg = false;

    while(tc--){
        int n; cin>>n;
        
        ll prSum = 0;
        vector<ll> v(n);

        bool happy = true;

        for(int i=0; i<n; ++i){
            cin>>v[i];
            prSum += v[i];
            if(prSum <=0 ) happy = false;
        }

        ll sufSum = 0;
        for(int i=n-1; i>=0; --i){
            sufSum += v[i];
            if(sufSum <= 0) happy = false;
        }

        if(happy) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

    }      
  
}