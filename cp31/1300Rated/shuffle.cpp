#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n, x, m;
        cin>>n>>x>>m;
        
        int ans = 1;
        int lmin = INT_MAX, rmax = INT_MIN;

        while(m--){
            int l, r;
            cin>>l>>r;

            if(l<=x && r>=x){
                
                lmin = min(l, lmin);
                rmax = max(r, rmax);

                ans = max(ans, rmax-lmin+1);
            }
            else{
                if(r>=lmin){
                    lmin = min(l, lmin);
                }
                if(l<=rmax){
                    rmax = max(r, rmax);
                }
                if(rmax == INT_MIN || lmin == INT_MAX) continue;
                ans = max(ans, rmax-lmin+1);
            }
                
        }

        cout<<ans<<nl;
    }      
  
}