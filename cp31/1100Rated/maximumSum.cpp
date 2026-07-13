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
        for(auto &el:v)cin>>el;

        sort(v.begin(), v.end());
        vector<ll> pre(n);

        pre[0] = v[0];

        for(int i=1;i<n; ++i){
            pre[i] = v[i] + pre[i-1];
        }

        ll ans = 0;
        for(int first = 0; first<=k; first++){
            int second = k- first;
            int left = 2*first;
            int right = n-1-second;

            ll sum = pre[right] - (left==0 ? 0: pre[left-1]);

            ans = max(sum, ans);
        }

        cout<<ans<<nl;
    }      
  
}