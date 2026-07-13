#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n,m,k;
        cin>>n>>m>>k;
        
        set<pair<int,int>> st;
        for(int i=0;i<k;++i){
            int r,c;cin>>r>>c;
            st.insert({r,c});
        }
        ll count = 4 * k;
        for(auto [r,c]:st){
            if(st.count({r-1,c})) count--;
            if(st.count({r+1,c})) count--;
            if(st.count({r,c-1})) count--;
            if(st.count({r,c+1})) count--; 
        }
        
        cout<<count<<nl;
    }      
    return 0;   
}