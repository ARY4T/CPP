#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    int mod = 998244353;

    while(tc--){
        int n; cin>>n;
        vector<int> v(n);
        int xr = 0;

        for(int i=0; i<n; ++i) {
            cin>>v[i];
            xr ^= v[i];
        }

        if(n == 1){
            cout<<0<<nl;
        }
        else{
            if(xr == 0) cout<<1<<nl;
            else{
                int cnt = 0;
                for(int i=0; i<n; ++i){
                    if((xr^v[i]) <= v[i]) cnt++;
                }
                cout<<cnt%mod<<nl;
            }
        }
    }      
  
}