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

        string s; cin>>s;

        int trans = 0;

        for(int i=0; i<n-1; ++i){
            if(s[i] != s[i+1]) trans++;
        }

        if(trans == 1) cout<<2<<nl;
        else cout<<1<<nl;

    }      
  
}