#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n;
        cin>>n;
        int ans = 0;
        int currPos = 1;
        
        while(currPos<=n){
            int nxt = min(n, (currPos*2)-1);
            ans = max(ans, nxt-currPos+1);
            currPos *= 2;
        }
        cout<<ans<<nl;
    }      
  
}