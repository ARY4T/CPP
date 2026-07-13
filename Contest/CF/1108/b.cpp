#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;

        if(n == 1) cout<<1<<nl;
        else if(n == 2) cout<<-1<<nl;
        else {
            vector<ll> ans = {1,2,3};
            ll sum = 6;
            n-=3;
            while(n--){
                ans.pb(sum);
                sum += sum;
            }

            for(auto el:ans){
                cout<<el<<" ";
            }
            cout<<nl;
        }
    }      
  
}