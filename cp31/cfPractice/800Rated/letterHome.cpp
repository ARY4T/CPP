#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n, s;
        cin>>n>>s;
        vector<int> v(n);
        for(auto &el: v) cin>>el;

        int dist1 = v[0] - s, dist2 = v[n-1] - s;

        int minDistEnd = min(abs(dist1), abs(dist2));

        int ans = minDistEnd + (v[n-1] - v[0]);
        cout<<ans<<nl;
    }      
  
}