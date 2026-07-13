#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin>>n;

    ll ans = 0;
    for(int i=0; i<n; ++i){
        ll num;cin>>num;
        ans += num-1;
    }
    cout<<ans;
}