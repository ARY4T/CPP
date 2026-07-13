#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int p,q,r;
        cin>>p>>q>>r;
        ll ans = 1;

        for(int i=0; i<20; ++i){
            int setIn = 0;
            if((1<<i)&p) setIn++;
            if((1<<i)&q) setIn++;
            if((1<<i)&r) setIn++;

            if(setIn == 1) ans*=0;
            else if(setIn == 3) ans*=4;
            
        }
        cout<<ans<<nl;
    }      
  
}