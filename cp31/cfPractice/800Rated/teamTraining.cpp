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
        ll x; cin>>x;

        vector<ll> a(n);
        for(auto &el:a) cin>>el;
        int ans = 0;
        int cnt = 0;
        sort(a.rbegin(), a.rend());

        for(int i=0; i<n; ++i){
            cnt++;
            if(a[i]*cnt >= x){
                ans++;
                cnt = 0;
            }
        }

        cout<<ans<<nl;
    }      
  
}