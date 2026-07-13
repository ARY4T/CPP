#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int x,k;
        cin>>x>>k;

        if(x%k != 0){
            cout<<1<<nl;
            cout<<x<<nl;
        }
        else {
            cout<<2<<nl;
            
            cout<<x-1<<" "<<1<<nl;
            
            
            
        }
    }      
    return 0;   
}