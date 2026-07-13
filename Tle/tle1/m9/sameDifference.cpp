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
        vector<int> arr(n+1);
        for(int i=1;i<=n;++i) cin>>arr[i];
        map<int,int> mpp;
        for(int i=1;i<=n;++i) mpp[arr[i]-i]++;
        
        ll ans = 0;
        for(auto el:mpp){
            ans += (1LL*el.second*(el.second-1))/2;
        }
        cout<<ans<<nl;
    }      
    return 0;   
}