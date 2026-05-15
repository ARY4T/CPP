#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n, k;
        cin>>n>>k;

        if(n&1){
            ll collsionInterval = n/2;
            ll collisions = (k-1)/collsionInterval;

            ll pos = (k-1 + collisions)%n + 1;
            cout<<pos<<nl;
        }
        else{
            cout<<(1 + (k-1)%n) << nl;
        }
    }      
  
}