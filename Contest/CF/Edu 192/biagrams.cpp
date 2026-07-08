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
        int k; cin>>k;
        vector<int> v(k);

        bool isPoss = false;
        int twos = 0;

        for(int i=0; i<k; ++i) {
            cin>>v[i];
            if(v[i]>=3) isPoss = true;
            if(v[i]>=2) twos++;
        }

        if(twos>=2) isPoss = true;
        
        if(isPoss) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
        
    }      
  
}