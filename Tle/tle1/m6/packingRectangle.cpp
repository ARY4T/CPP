#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        ll w,h,n;
            cin>>w>>h>>n;
            ll low=0;
            ll high=1;
        while(1){
            
            ll nw=high/w;
            ll nh = high/h;
            if(nw*nh>n)
                break;
            high *= 2;
        }
        ll ans;
        while(low<=high){
            ll mid=(low+high)/2;
            ll nw=mid/w;
            ll nh =mid/h;
            if(nw*nh>=n){
                ans = mid;
                high = mid-1;
            }
            else {
                low = mid+1;
            }

        }
        cout<<ans<<nl;
    }      
    return 0;   
}