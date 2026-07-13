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

        for(int i=0; i<n; ++i){
            cin>>v[i];
        }

        vector<int> prefixGCD(n), suffixGCD(n);
        prefixGCD[0] = v[0];

        for(int i=1; i<n; ++i){
            prefixGCD[i] = gcd(prefixGCD[i-1], v[i]);
        }

        suffixGCD[n-1] = v[n-1];

        for(int i=n-2; i>=0; --i){
            suffixGCD[i] = gcd(suffixGCD[i+1], v[i]);
        }

        int ans = 0;

        for(int i=0; i<n; ++i){
            int prefGCD = (i-1>=0)?(prefixGCD[i-1]): 0;
            
            int sufGCD = (i+1<n)?(suffixGCD[i+1]): 0;

            if(gcd(prefGCD, sufGCD) != 1) ans++;
            
        }

        cout<<ans<<nl;
    }      
  
}