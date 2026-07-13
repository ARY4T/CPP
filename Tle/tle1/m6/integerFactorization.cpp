#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n = -1;
    while(n != 0){
        cin>>n;
        if(n == 0) break;

        map<ll,ll> m;
        while(n%2 == 0){
            m[2]++;
            n /= 2;
        }

        for(ll i=3;i*i<=n;i+=2){
            while(n%i == 0) {
                m[i]++;
                n /= i;
            }
        }

        if(n>2){
            m[n]++;
        }

        for(auto el:m) cout<<el.first<<"^"<<el.second<<" ";
        cout<<nl;
    }      
    return 0;   
}