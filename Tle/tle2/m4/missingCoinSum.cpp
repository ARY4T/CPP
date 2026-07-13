#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin>>n;
    vector<int> v(n);

    for(auto &el:v) cin>>el;

    sort(v.begin(), v.end());

    if(v[0] != 1) {
        cout<<1<<nl;
    }

    else{
        ll minCoinSum = 0;
        ll maxCoinSum = 1;

        for(int i=1;i<n;++i){
            ll newMinCSum = minCoinSum + v[i];
            ll newMaxCSum = maxCoinSum + v[i];

            if(newMinCSum - maxCoinSum > 1){
                break;
            } 
            maxCoinSum =  newMaxCSum;
        }
        cout<<maxCoinSum + 1<<nl;
    }   
  
}