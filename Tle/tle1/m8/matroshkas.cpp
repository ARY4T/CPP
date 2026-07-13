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

        vector<ll> v(n);
        map<int,int> mpp;
        

        for(auto &el:v){
            cin>>el;
            mpp[el]++;
        }

        ll ans=0;
        int prevEl = 0;
        int prevCnt = 0;

        for(auto &[el,cnt]: mpp){
            if(el != prevEl+1){
                ans += cnt;
            }
            else {
                if(cnt > prevCnt) ans += cnt - prevCnt;
            }
            prevEl = el;
            prevCnt = cnt;

        }     
        
        cout<< ans<<nl;
    }      
  
}