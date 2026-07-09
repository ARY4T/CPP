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
        vector<int> v(n);
        int minEl = INT_MAX;

        int ans = 0;
        for(int i=0; i<n; ++i) {
            cin>>v[i];
            minEl = min(minEl, v[i]);
            ans+=minEl;
        }
        cout<<ans<<nl;
        
    }      
  
}