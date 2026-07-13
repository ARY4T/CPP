#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll a,b;
        cin>>a>>b;
        int ans = INT_MAX;
        for(int i=0;i<32;++i){
            ll newB = b+i;
            int ops = i;
            if(newB == 1) continue;

            ll dummyA = a;
            while(dummyA > 0){
                dummyA /= newB;
                ops++;
            }

            ans = min(ans, ops);

        }

        cout<<ans<<nl;
    }      
}