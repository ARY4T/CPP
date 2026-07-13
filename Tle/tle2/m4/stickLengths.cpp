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

    sort(v.begin(), v.end());
    ll median = 0;
    if(n&1) median = v[n/2];
    else {
        median = (v[n/2] + v[n/2 - 1])/2;
    }

    ll cost = 0;

    for(int i=0;i<n;++i){
        cost += abs(median - v[i]);
    }
    cout<<cost;
}