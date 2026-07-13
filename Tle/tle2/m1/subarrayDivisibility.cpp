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

    map<ll,ll> mpp;
    mpp[0] = 1;

    long long preS = 0;
    for(int i=0;i<n;++i){
        preS += v[i];
        mpp[(preS%n + n)%n]++;
    }
    ll answer=0;
    for(auto it:mpp){
        answer+= (it.second - 1)*it.second/2;
    }
    cout<<answer<<nl;
  
}