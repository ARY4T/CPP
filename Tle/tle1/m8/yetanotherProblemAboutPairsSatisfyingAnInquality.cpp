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

        vector<int> validInd;

        ll ans = 0;

        for(int j=1;j<=n;++j){
            if(v[j-1] < j){
                auto it = lower_bound(validInd.begin(), validInd.end(), v[j-1]);
                ans += distance(validInd.begin(), it);

                validInd.push_back(j);
            }
        }
        cout<<ans<<nl;
    }      
  
}