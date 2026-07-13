#include <bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    vector<vector<int>> pairs(1001);

    for(int i=1; i<=1000; ++i){
        for(int j=1; j<=1000; ++j){
            if(__gcd(i,j) == 1) pairs[i].push_back(j);
        }
    }

    while(tc--){
        int n; cin>>n;

        vector<int> idx(1001);

        int x;
        for(int i=0; i<n; ++i) {
            cin>>x;
            idx[x] = i+1;
        }

        int ans = -1;
        for(int i=1; i<=1000; ++i){

            if(idx[i] == 0) continue;
            for(auto &el: pairs[i]){
                if(idx[el] != 0) ans = max(ans, idx[el]+idx[i]);
            }
        }
        cout<<ans<<nl;
    }      
  
}