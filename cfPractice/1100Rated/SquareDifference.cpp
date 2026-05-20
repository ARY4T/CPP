#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll a, b;
        cin>>a>>b;

        ll n1 = a+b;
        ll n2 = a-b;
        bool prime = false;

        if(n2 == 1) {
            int cnt = 0;
            for(int i=2; i*i<=n1; ++i){
                if(n1%i == 0) {
                    cnt++;
                    if(n1/i != i) cnt++;
                }
                
                if(cnt > 1) break;
            }
            if(cnt == 0) prime = true;
        }

        if(prime) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
  
}