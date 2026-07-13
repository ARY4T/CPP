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
        vector<int> v(n);
        for(auto &el:v) cin>>el;

        sort(v.rbegin(), v.rend());
        for(auto el:v) cout<<el<<" ";
        cout<<nl;
    }      
  
}