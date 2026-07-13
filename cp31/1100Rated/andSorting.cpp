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
        vector<int> v(n);

        for(auto &el:v) cin>>el;

        int ans = -1;
        for(int i=0; i<n; ++i){
            if(i != v[i]){
                ans &= v[i];
            }
        }
        cout<<ans<<nl;
    }      
  
}