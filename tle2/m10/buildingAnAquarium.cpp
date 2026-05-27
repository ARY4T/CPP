#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n, x;
        cin>>n>>x;
        vector<ll> v(n);

        for(int i=0; i<n; ++i){
            cin>>v[i];
        }

        ll l = 1, h = 1e10;

        auto helper = [&](ll height){
            ll water = 0;

            for(int i=0; i<n; ++i){
                if(height <= v[i]) continue;
                water += height - v[i];
            }

            return (water <= x);
        };

        while(l<=h){
            ll mid = l + (h-l)/2;

            if(helper(mid)){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }

        cout<< h <<nl;

    }      
  
}