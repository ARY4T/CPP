#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

ll sumTill(ll n){
    return (n * (n+1))/2;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll k, x;
        cin>>k>>x;

        ll low = 1, high = 2*k-1;
        ll ans = high;

        while(low<=high){
            ll mid = low + (high-low)/2;
            ll cnt = 0;

            if(mid <= k){
                cnt = sumTill(mid);
            }
            else {
                cnt = sumTill(k) + sumTill(k-1) - sumTill(2*k - 1 - mid);
            }

            if(cnt >= x){ 
                high = mid-1;
                ans = mid;
            }
            else {
                low = mid+1;
            }
        }

        cout<<ans<<nl;    
    }      
  
}