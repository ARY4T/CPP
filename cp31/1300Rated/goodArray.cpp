#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
        int n; cin>>n;
        vector<int> v(n);
        unordered_map<int, vector<int>> mp;

        for(int i=0; i<n; ++i) {
            cin>>v[i];
            mp[v[i]].push_back(i);
        }

        sort(v.begin(), v.end());
        ll sum = accumulate( v.begin(), v.end()-1, 0LL);
        
        vector<int> ans;

        for(int i=0; i<n-1; ++i){
            if(sum - v[i] == v[n-1]) {

                ans.push_back(mp[v[i]].back() + 1);
                mp[v[i]].pop_back();           

            }
        }

            if(sum - v[n-2] == v[n-2]) {
                for(int j=0; j<mp[v[n-1]].size(); ++j){
                    ans.push_back(mp[v[n-1]][j] + 1);
                    
                }
            }
        

        cout<<ans.size()<<nl;

        for(int i=0; i<ans.size(); ++i) cout<<ans[i]<<" ";
        cout<<nl;
        
     
  
}