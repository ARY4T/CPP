#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n, k;
        cin>>n>>k;
        vector<int> v(n);
        for(auto &el:v) cin>>el;

        int ops = 0;
        for(int i=0; i<=31; ++i){
           int cnt = 0;
           for(int nums:v){
            if((nums & (1<<i))!=0) cnt++;
           }
           ops+=ceil(1.0*cnt/k);
        }
        cout<<ops<<nl;
    }      
  
}