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
        vector<ll> v(n);
        ll sum = 0;
        ll mini = 1e9;

        for(auto &el:v) {
            cin>>el;
            if(el<0) {
                sum -= el;
                mini = min(mini, -el);
            }
            else {
                sum += el;
                mini = min(mini, el);
            }
        }

        int negatives = 0;

        for(int i=0; i<n; ++i){
            if(v[i]<0) negatives += 1;
        }

        
        if(negatives&1){
            sum -= 2*mini;
        }
        
        cout<<sum<<nl;
    }      
  
}