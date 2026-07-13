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

        for(int &el:v) cin>>el;

        unordered_map<int, int> mp;
        int col = 1;
        for(int i=0; i<n; ++i){
            mp[v[i]] = col%2;
            col++;
        }

        sort(v.begin(), v.end());
        col = mp[v[0]];

        bool isPossible = true;
        for(int i=0; i<n; ++i){
            if(col%2 != mp[v[i]]) {
                isPossible = false;
            }
            col++;
        }

        if(isPossible) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
  
}