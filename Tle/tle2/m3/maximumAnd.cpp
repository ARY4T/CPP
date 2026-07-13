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
        vector<int> nums(n);
        for(auto &el:nums) cin>>el;

        vector<pair<ll,ll>> contributions(32);

        for(int i=0; i<=31; ++i){
            ll cnt = 0;
            for(int j=0;j<n;++j){
                if(nums[j] & (1<<i)) cnt++;
            }
            contributions[i] = {cnt * (1LL<<i), i*(-1)};
        }

        sort(contributions.rbegin(), contributions.rend());

        int ans=0;
        for(int i=0;i<k;++i){
            ans = ans | (1<<abs(contributions[i].second));
        }
        cout<<ans<<nl;
    }      
    return 0;   
}