#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n, k;
        cin>>n>>k;
        vector<ll> v(n);
        
        for(auto &el:v) cin>>el;

        bool isPossible = false;
        
        map<ll, int> mpp;

        for(int i=0; i<n; ++i){
            mpp[v[i]]++;
        }

        for(int i=0; i<n; ++i){
            if(mpp.find(v[i]-k) != mpp.end()){
                isPossible = true;
                break;
            }
        }

        if(isPossible) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

    }      
  
}