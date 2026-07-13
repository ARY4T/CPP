#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n;cin>>n;
        ll a;
        vector<pair<ll, ll>> v;

        for(int i=0;i<n;++i){
            cin>>a;
            v.push_back({a,i});
        }

        vector<ll> pre(n);
        sort(v.begin(), v.end());

        pre[0] = v[0].first;
        for(int i=1;i<n;++i){
            pre[i] = pre[i-1]+v[i].first;
        }

        vector<ll> ans(n);
        for(int i=0;i<n;++i){
            int j=i;
            int found = i;
            while(j<n){
                pair<ll,ll> temp = {pre[j]+1, INT_MIN};
                ll ind = lower_bound(v.begin(), v.end(), temp)-v.begin();
                ind--;
                if(ind == j) break;

                found += ind-j;
                j=ind;
            }
            ans[v[i].second] = found;
        }
        for(int i=0;i<n;++i) cout<<ans[i]<<" ";
        cout<<nl;

    }      
  
}