#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,k;cin>>n>>k;
        vector<int> a(n),b(n);
        for(auto &el:a)cin>>el;
        for(auto &el:b)cin>>el;

        int maxi = 0;
        int sum = 0;
        int ans = 0;

        for(int i=0;i<min(n,k);++i){
            sum+=a[i];
            maxi=max(maxi, b[i]);
            ans=max(ans,sum+(k-i-1)*maxi);
        }
        cout<<ans<<nl;
    }    
}