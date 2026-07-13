#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin>>n;
    vector<ll> stones(n);
    for(auto &el:stones)cin>>el;

    vector<ll> prefixSum1(n+1,0);

    for(int i=1;i<=n;++i){
        prefixSum1[i] += prefixSum1[i-1] + stones[i-1];
    }

    sort(stones.begin(), stones.end());

    vector<ll> prefixSum2(n+1,0);

    for(int i=1;i<=n;++i){
        prefixSum2[i] += prefixSum2[i-1] + stones[i-1];
    }


    int m;cin>>m;
    while(m--){
        int l,r,q;
        cin>>q>>l>>r;

        if(q == 1){
            cout<<prefixSum1[r] - prefixSum1[l-1]<<nl;
        }
        else{
            cout<<prefixSum2[r] - prefixSum2[l-1]<<nl;
        }
    } 
}