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

        int q;cin>>q;

        vector<ll> v(n);
        for(auto &el:v) cin>>el;

        ll oldSum = 0;

        for(int i=0;i<n;++i){
            oldSum += v[i];
        }

        vector<ll> prefix_sum(n+1, 0);

        for(int i=1;i<=n;++i){
            prefix_sum[i] = prefix_sum[i-1] + v[i-1];
        }

        while(q--){
            ll l,r,k;
            cin>>l>>r>>k;

            ll el_sum = prefix_sum[r] - prefix_sum[l-1];

            ll new_sum = (r-l+1)*k;

            ll total_sum = oldSum - el_sum + new_sum;

            if(total_sum%2 == 1 ) cout<<"YES"<<nl;

            else cout<<"NO"<<nl;
        }

    }      
    return 0;   
}