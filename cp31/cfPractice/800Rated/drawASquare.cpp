#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int l,r,d,u;
        cin>>l>>r>>d>>u;

        bool isSq = true;

        if(l != r || l!=u || l!=d) isSq = false;
  
        if(isSq) cout<<"Yes"<<nl;
        else cout<<"No"<<nl;

    }      
  
}