#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,k;
        cin>>n>>k;

        vector<ll> v(n);
        for(auto &el:v) cin>>el;

        vector<int> cnt(31, 0);
        
        for(int i=30; i>=0; --i){
            int temp = 0;

            for(int j=0; j<n; ++j){
                if((v[j] & (1<<i)) > 0) temp++;
            }
            cnt[i] = n-temp;
        }
        ll ans = 0;

        for(int i=30; i>=0; --i){
            if(k>=cnt[i]){
                k-=cnt[i];
                ans |= (1<<i);
            }
        }
        cout<<ans<<nl;
    }      
  
}