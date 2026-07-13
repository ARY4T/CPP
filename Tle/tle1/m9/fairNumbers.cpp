#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        ll n;cin>>n;
        
        for(ll i=n;i<=LONG_LONG_MAX;++i){
            ll num = i;
            bool isFair = false;
            while(num > 0){
                int lastDig = num %10;
                if(lastDig == 0) {
                    num /= 10;
                    continue;
                }
                if(i % lastDig == 0){
                    num/=10;
                    isFair = true;
                }
                else {
                    isFair = false;
                    break;
                }
            }
            if(isFair){
                cout<<i<<nl;
                break;
            }

        }
    }      
    return 0;   
}