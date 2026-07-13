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
        
        int xr = 0;
        for(int i=0;i<n;++i){
            int el;cin>>el;
            xr ^= el;
        }

        if(n%2 == 0){
            if(xr == 0){
                cout<<0<<nl;
            }
            else cout<<-1<<nl;
        }
        else cout<<xr<<nl;
    }      
    return 0;   
}