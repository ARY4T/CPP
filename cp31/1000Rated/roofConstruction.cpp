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
        n--;
        ll msb = log2(n);
        vector<ll> ans;
        ll num = pow(2, msb)-1;
        while(num >= 0) {
            ans.push_back(num);
            num--;
        }
        num = pow(2, msb);
        while(num<=n){
            ans.push_back(num);
            num++;
        }
        for(auto el:ans){
            cout<<el<<" ";
        }
        cout<<nl;
    }      
  
}