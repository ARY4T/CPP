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
        ll x;
        cin>>x;

        ll minSum = (1LL*k*(k+1))/2;
        ll maxSum = (1LL*n*(n+1))/2 - (1LL*(n-k)*(n-k+1))/2;

        if(x>=minSum && x<=maxSum) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
    return 0;   
}