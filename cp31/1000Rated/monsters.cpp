#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,k;
        cin>>n>>k;

        vector<pair<ll,ll>> v(n);
        
        for(int i=0;i<n;++i){
            int health;
            cin>>health;
            v[i] = {health, i+1};
        }

        for(int i=0;i<n;++i){
            v[i].first = v[i].first%k;
            if(v[i].first == 0)v[i].first=k;
        }
        
        sort(v.begin(),v.end(), [&](pair<ll,ll>a,pair<ll,ll>b){
            if(a.first != b.first) return a.first>b.first;
            return a.second < b.second;
        });

        for(auto el: v){
            cout<<el.second<<" ";
        }
        cout<<nl;
    }      
  
}