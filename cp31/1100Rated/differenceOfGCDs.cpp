#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n;
        ll l, r;
        cin>>n>>l>>r;
        bool possible = true;
        vector<int> ans;

        for(int i=1; i<=n; ++i){
            int prod = l/i;
            if(l%i != 0) prod++;
            if(prod*i > r) {
                possible = false;
                break;
            }
            ans.push_back(prod*i);
        }

        if(possible){
            cout<<"YES"<<nl;
            for(int &el:ans){
                cout<<el<<" ";
            }
            cout<<nl;
        }
        else cout<<"NO"<<nl;
    }      
  
}