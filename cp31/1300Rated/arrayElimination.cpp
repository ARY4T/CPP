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

        for(int i=0; i<n; ++i) cin>>v[i];
        
        vector<int> setBits(30);

        for(int i=0; i<30; ++i){
            for(int j=0; j<n; ++j){
                if(1 & (v[j]>>i)) setBits[i]++;
            }
        }

        int gc = 0;
        for(int i=0; i<30; ++i){
            gc = gcd(gc, setBits[i]);
        }

        vector<int> ans;

        for(int i=1; i*i<=gc; ++i){
            if(gc%i == 0){
                if(i*i != gc) {
                    ans.push_back(i);
                    ans.push_back(gc/i);
                }
                else {
                    ans.push_back(i);
                }
            }
        }

        sort(ans.begin(), ans.end());

        if(ans.empty()){
            for(int i=1; i<=n; ++i){
                cout<<i<<" ";
            }
            cout<<nl;
            continue;
        }
        
        for(auto &el:ans){
            cout<<el<<" ";
        }
        cout<<nl;     
    }      
  
}