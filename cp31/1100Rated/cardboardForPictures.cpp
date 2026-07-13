#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n,c;
        cin>>n>>c;
        vector<int> s(n);
        for(auto &el:s)cin>>el;

        ll l = 1, r = 1e9, ans = -1;

        while(l<=r){
            ll mid = (l+r)/2;
            ll sum = 0;
            for(int i=0;i<n;++i){
                sum += (s[i] + 2*mid)*(s[i] + 2*mid);
                if(sum > c) break;
            }

            if(sum <=c){
                ans = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        cout<<ans<<nl;
    }      
  
}