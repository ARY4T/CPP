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
        for(ll i=1;i<50;++i){
            if(n%i!=0) {cout<< i-1<< nl;
            break;}
        }
    }      
    return 0;   
}