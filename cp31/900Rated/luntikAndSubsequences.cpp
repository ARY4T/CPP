#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n;cin>>n;
        vector<ll> v(n);
        ll ones = 0;
        ll zeroes= 0;
        for(auto &el:v){
            cin>>el;
            if(el == 1 ) ones++;
            if(el == 0) zeroes++;
        }
        ll cnt = ones*(1LL<<zeroes);
        cout<<cnt<<nl;

    }      

}