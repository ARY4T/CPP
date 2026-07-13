#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n, k;
        cin>>n>>k;
        vector<int> v(n);
        for(auto &el:v) cin>>el;
        int streak = 0;
        int pause = false;
        int ans = 0;
        for(int i=0; i<n; ++i){
            if(pause) {
                pause = false;
                continue;      
            }

            if(v[i] == 0) streak++;
            else streak = 0;

            if(streak == k){
                streak = 0;
                ans++;
                pause = true;
            }
        }
        cout<<ans<<nl;
    }      
  
}