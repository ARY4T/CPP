#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n; cin>>n;

        if(n%12 != 10){
            ll a = n%12;
            ll b = n - a;

            cout<<a<<" "<<b<<nl;
        }
        else{
            if(n >= 22) {
                cout<<22<<" "<<n-22<<nl;
            }
            else cout<<-1<<nl;
        }
    }      
  
}