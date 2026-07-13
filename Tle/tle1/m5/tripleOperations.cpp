#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int getOps(int i){
    int ops = 0;
    while(i>0){
        i /= 3;
        ops++;
    }
    return ops;
}

vector<ll> power3;

void precompPowers(){
    ll currentPow=1;

    while(currentPow < 3e5){
        power3.push_back(currentPow);
        currentPow *=3;
    }
    power3.push_back(currentPow);
}

ll getOpsSum(int i){
    ll opsSum = 0;

    for(int k=1;k<power3.size();++k){

        ll startVal = power3[k-1];
        ll endVal = power3[k]-1;

        if(startVal > i) break;

        ll upperBound = min((ll)i, endVal);

        ll count = upperBound - startVal + 1;

        opsSum += count*k;
    }
    return opsSum;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    precompPowers();

    while(tc--){
        int l,r;
        cin>>l>>r;

        ll ops = 0;
        
        ll makeZeroOps = getOps(l);

        ll reqSum = getOpsSum(r) - getOpsSum(l-1);

        cout<< makeZeroOps + reqSum<<nl;
        
    }      
    return 0;   
}