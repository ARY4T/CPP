#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;
        if(n&1) cout<<0<<nl;
        else{
            if(n%4 == 0){
                cout<<n/4+1<<nl;

            }
            else{
                cout<<(n-2)/4+1<<nl;
            }
        }
    }      
  
}