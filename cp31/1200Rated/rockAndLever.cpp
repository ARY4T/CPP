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

        vector<int> v(n);
        for(int i=0; i<n; ++i) cin>>v[i];
        unordered_map<int, int> mp;

        for(int i=0; i<n; ++i){
            for(int j=31; j>=0; --j){
                if(1&(v[i]>>j)){
                    mp[j]++;
                    break;
                }
                
            }
        }
        
        ll ans = 0;

        for(auto &[el, cnt]:mp){
            ll pair = cnt;
            pair *= (cnt-1);
            pair /= 2;
            ans += pair;
        }

        cout<<ans<<nl;
    }      
  
}