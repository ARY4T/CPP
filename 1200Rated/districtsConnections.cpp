#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;
        vector<ll> v(n);
        set<int> st;
        
        for(auto &el:v) {
            cin>>el;
            st.insert(el);
        }
        
        if(st.size() == 1) cout<<"NO"<<nl;
        else{
            cout<<"YES"<<nl;
            int g1 = v[0];
            int g2 = v[1];
            int ind = 2;
            while(g1 == g2){
                g2 = v[ind++];
            }

            for(int i=0; i<n; ++i){
                if(ind == i+1) continue;
                if(v[i] == g2){
                    cout<<i+1<<" "<<1<<nl;
                }
                else cout<<i+1<<" "<<ind<<nl;
            }
        }
        
    }      
  
}