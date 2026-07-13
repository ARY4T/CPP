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
        int ans = 0;
        int cnt = 0;
        for(int i=0;i<n;++i){
            int el;cin>>el;
            if(el == 0){
                cnt++;
                ans = max(ans, cnt);
            }
            else cnt = 0;
        }
        cout<<ans<<nl;
    }      
    return 0;   
}