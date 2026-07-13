#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,k;
        cin>>n>>k;
        vector<vector<int>> v(n, vector<int> (n));

        for(auto &el:v){
            for(auto &el1:el) cin>>el1;
        }

        int cnt = 0;
        for(int i=0; i<n; ++i){
            for(int j=0; j<n; ++j){
                if(v[i][j] != v[n-1-i][n-1-j]) cnt++;
            }
        }
        cnt /= 2;

        if(cnt>k) cout<<"NO"<<nl;
        else {
            int diff = k-cnt;
            if((!(n&1))&&(diff&1)){
                cout<<"NO"<<nl;
            }
            else cout<<"YES"<<nl;
        }
    }      
  
}