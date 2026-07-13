#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,q;
    cin>>n>>q;

    vector<ll> v(n);

    for(auto &el:v)cin>>el;

    vector<ll> prefixSum(n+1,0);

    for(int i=1;i<=n;++i){
        prefixSum[i] = prefixSum[i-1] + v[i-1];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        cout<< prefixSum[r] - prefixSum[l-1] <<nl;
    }
   
}