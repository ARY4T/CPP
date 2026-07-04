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
        vector<ll> a(n), b(n);
        for(int i=0; i<n; ++i) {
            cin>>a[i];
        }
        ll inc = 0, dec = 0;
        bool pos = true;

        for(int i=0; i<n; ++i) {
            cin>>b[i];
            if(b[i] >= a[i]) inc += b[i] - a[i];
            else dec += a[i] - b[i];

            if(dec > inc) pos = false;
        }

        if(pos) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
        

    }      
  
}