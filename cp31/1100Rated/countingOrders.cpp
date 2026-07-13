#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
const int MOD = (1e9 + 7);
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n;cin>>n;

        vector<ll> a(n), b(n);
        for(auto &el:a) cin>>el;
        for(auto &el:b) cin>>el;

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        ll res = 1; 
        for(int i=0;i<n;++i){
            ll temp = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
            ll cnt = a.size() - temp;
            res = res * max(cnt-i, 0LL) % MOD;
        }
        cout<<res<<nl;
    }      
  
}