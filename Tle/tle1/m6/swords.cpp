#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin>>n;
    vector<ll> v(n);
    for(auto &el:v) cin>>el;

    
    if(n==2){
        cout<<1<<" "<<abs(v[0]-v[1])<<nl;
    }
    else{

        sort(v.begin(),v.end());
        ll mx = v[n-1];
        ll swordsTaken = gcd(mx-v[1],mx-v[0]);

        for(int i=2;i<n;++i){
            swordsTaken = gcd(swordsTaken, mx-v[i]);
        }

        ll people = 0;
        
        int i=0;
        while(v[i] != mx){
            people += (mx - v[i])/swordsTaken;
            i++;
        }
        cout<<people<<" "<<swordsTaken<<nl;
    }        
}