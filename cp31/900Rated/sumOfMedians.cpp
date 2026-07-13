#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,k;
        cin>>n>>k;

        vector<ll> v(n*k);

        for(auto &el:v) cin>>el;

        ll pointer = n*k;

        ll sum = 0;
        while(k--){
            pointer -= (n/2+1);
            sum += v[pointer];
        }
        cout<<sum<<nl;

    }      
  
}