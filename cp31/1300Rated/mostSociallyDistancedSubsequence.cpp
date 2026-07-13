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

        vector<int> v(n);
        for(int i=0; i<n; ++i) cin>>v[i];

        vector<int> ans = {v[0]};


        for(int i=2; i<n; ++i){
            if((v[i-1] > v[i-2] && v[i-1] < v[i]) || (v[i-1] < v[i-2] && v[i-1] > v[i])){
                continue;
            }
            else{
                ans.push_back(v[i-1]);
            }
        }
        ans.push_back(v[n-1]);

        cout<<ans.size()<<nl;
        for(int i=0; i<ans.size(); ++i){
            cout<<ans[i]<<" ";
        }
        cout<<nl;

    }      
  
}