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
        for(auto &el:v)cin>>el;

       bool done = false;
       vector<int> ans;
       
       for(int i=1;i<n-1;++i){
        if(v[i] > v[i-1] && v[i] > v[i+1]){
            done = true;
            ans = {i-1,i,i+1};
            break;
        }
       }
       if(done){
            cout<<"YES"<<nl;
            cout<<ans[0]+1<<" "<<ans[1]+1<<" "<<ans[2]+1<<nl;
       }
       else cout<<"NO"<<nl;
    }      
}