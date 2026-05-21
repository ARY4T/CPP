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
        ll mini = LONG_MAX;

        for(int i=0; i<n; ++i) {
            cin>>v[i];
            mini = min(mini, v[i]);
        }

        vector<int> idx;

        multiset<ll> st;

        for(int i=0; i<n; ++i){
            if(v[i]%mini == 0){
                idx.push_back(i);
                st.insert(v[i]);
            }
        }

        vector<ll> s(v.begin(), v.end());
        
        int i = 0;
        for(auto &el:st){
            v[idx[i++]] = el;
        }
        
        sort(s.begin(), s.end());

        if(v == s) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
        
    }      
  
}