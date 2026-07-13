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
        
        vector<int> v(n);

        for(auto &el:v) cin>>el;

        sort(v.begin(),v.end());

        int ans = 0;
        int cnt = 1;

        for(int i=1;i<n;++i){
            if(v[i]-v[i-1] <= k){
                cnt ++;
                ans = max(ans, cnt);
                
            }
            else {
                cnt = 1;

            }
        }
        ans = max(ans,cnt);

        cout<<n-ans<<nl;
    }      
    return 0;   
}