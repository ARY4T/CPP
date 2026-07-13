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
        if(n%2 != 0){
            cout<<"YES"<<nl;
            continue;
        }
        while(n%2 == 0){
            n /= 2;
        }
        if(n != 1) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
    return 0;   
}