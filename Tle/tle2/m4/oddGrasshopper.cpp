#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll x,n;
        cin>>x>>n;
        ll moves = n%4;
        
        if(moves == 1 ){
            if(x&1) x += n;
            else x -= n;
        }
        else if(moves == 2){
            if(x&1) --x;
            else ++x;
        }
        else if(moves == 3){
            if(x&1) x-= (n+1);
            else x += (n+1);
        }
        cout<<x<<nl;
        
    }      
}