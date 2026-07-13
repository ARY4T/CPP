#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x;
    cin>>n>>x;

    vector<ll> v(n);

    for(auto &el:v) cin>>el;

    ll sum = 0;
    map<ll,int> mpp;

    ll ans = 0;
    for(int i=0;i<n;++i){
        sum += v[i];
        ans += mpp[sum - x];
        if(x == sum) ans++;

        mpp[sum]++;
    }
    
    cout<<ans;       
}