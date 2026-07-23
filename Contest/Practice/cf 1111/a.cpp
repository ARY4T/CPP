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
        vector<int> v(n);

        int sum = 0;
        int ones = 0;
        for(int i=0; i<n; ++i) {
            cin>>v[i];
            if(v[i] == 1) ones++;
        }
        
        if(n&1){
            cout<<"NO"<<nl;
        }
        else {
            if(ones%2 == (n/2)%2)
            cout<<"YES"<<nl;

            else cout<<"NO"<<nl;
        }
        
    }      
  
}