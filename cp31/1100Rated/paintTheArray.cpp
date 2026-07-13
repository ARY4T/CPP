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

        ll gcdEven = 0, gcdOdd = 0;

        for(int i=0; i<n; ++i) {

            cin>>v[i];

            if(i&1) gcdOdd = gcd(gcdOdd, v[i]);
            else gcdEven = gcd(gcdEven, v[i]);
        }
        int possibleEven = true, possibleOdd = true;

        if(possibleEven){
            for(int i=1; i<n; i+=2){
                if(v[i]%gcdEven == 0){
                    possibleEven = false;
                    break;
                }
            }
        }
        
        if(possibleOdd){
            for(int i=0; i<n; i+=2){
                if(v[i]%gcdOdd == 0){
                    possibleOdd = false;
                    break;
                }
            }
        }

        if(possibleEven) cout<<gcdEven<<nl;
        else if(possibleOdd) cout<<gcdOdd<<nl;
        else cout<<0<<nl;
    }      
  
}