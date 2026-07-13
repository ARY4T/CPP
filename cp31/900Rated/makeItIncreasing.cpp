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
        for(auto &el:v) cin>>el;

        int ops = 0;
        bool possible = true;
        for(int i=n-2;i>=0;--i){
            if(v[i] >= v[i+1]){
                if(v[i+1] == 0){
                    possible = false;
                    break;
                }
                while(v[i] >= v[i+1]){
                    v[i] /= 2;
                    ops++;
                    
                }
            }
        }
        if(possible) cout<<ops<<nl;
        else cout<<-1<<nl;
    }      
  
}