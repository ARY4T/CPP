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
        int n, x, y;
        cin>>n>>x>>y;
        int g = gcd(x, y);

        bool isPoss = true;

        vector<int> v(n);
        for(int i=1; i<=n; ++i){
            cin>>v[i-1];

            if((v[i-1]-i)%g != 0) isPoss = false;
        }

        if(isPoss) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
        
    }      
  
}