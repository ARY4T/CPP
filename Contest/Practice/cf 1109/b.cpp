#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;
        vector<ll> v(n);
        for(int i=0; i<n; ++i) cin>>v[i];

        bool isPoss = true;
        ll extra = 0;

        for(int i=0; i<n; ++i){
            if(v[i] + extra < i+1){
                isPoss = false;
                break;
            }


            extra += v[i] - (i+1);
        }

        if(isPoss) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
  
}