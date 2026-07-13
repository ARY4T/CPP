#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        ll n,k;
        cin>>n>>k;
        if(n%2 == 0){
            cout<<"YES"<<nl;
        }
        else{
            if(((n-k)%2 == 0)||((n%k)%2 == 0)) cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
    }      
    return 0;   
}