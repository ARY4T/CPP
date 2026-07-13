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
        int ans = 0;
        int cntNeg = 0;

        vector<int> v(n);

        for(auto &el:v) {
            cin>>el;
            if(el == -1) cntNeg++;
            else if(el == 0) ans+=1;
        }
        
        if(cntNeg&1) ans+=2;
        

        cout<<ans<<nl;
    }      
  
}