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
        vector<ll> v(n);
        for(auto &el:v) cin>>el;

        vector<ll> pre(n);
        pre[0] = v[0];
        for(int i=1;i<n;++i){
            pre[i] = pre[i-1] + v[i];
        }

        ll ans = 0;
        for(int k=1;k<n;++k){
            if(n%k) continue;

            int start = k-1;
            ll res=0;
            ll maxS = pre[start];
            ll minS = pre[start];

            for(int i=start+k;i<n;i+=k){
                ll curr = pre[i]-pre[i-k];
                maxS = max(maxS, curr);
                minS = min(minS, curr);
            }
            ans = max(ans, maxS-minS);
        }
        cout<<ans<<nl;
    }      
  
}