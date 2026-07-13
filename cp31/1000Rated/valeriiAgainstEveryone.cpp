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
        for(auto &el:v)cin>>el;

        unordered_set<ll> s;

        for(auto el:v) s.insert(el);

        if(s.size()<n) cout<<"YES"<<nl;
        else  cout<<"NO"<<nl;

    }      
  
}