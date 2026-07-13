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
        string s;cin>>s;
        set<int> st;
        vector<int> dist(n);

        for(int i=0;i<n;++i){
            st.insert(s[i]);
            dist[i] = st.size();
        }
        ll ans = 0;
        for(int i=0;i<n;++i){
            ans += dist[i];
        }
        cout<<ans<<nl;
    }    
  
}