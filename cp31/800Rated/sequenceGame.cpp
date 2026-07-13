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

        vector<int> ans;
        ans.push_back(v[0]);
        
        for(int i=1;i<n;++i){
            if(v[i-1] > v[i]){
                ans.push_back(v[i]);
            }
            ans.push_back(v[i]);
        }

        cout<<ans.size()<<nl;
        for(auto const &el:ans){
            cout<<el<<" ";
        }
        cout<<nl;
        
    }      
    return 0;   
}