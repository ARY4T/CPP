#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n,x,y;
        cin>>n>>x>>y;

        ll divBYx = n/x;
        ll divBYy = n/y;

        ll lcmOfxNy = lcm(x,y);

        ll countLCM = n/lcmOfxNy;
        divBYx -= countLCM;
        divBYy -= countLCM;

        ll toAdd = (1LL*n*(n+1) - (n-divBYx)*(n-divBYx+1))/2;
        ll toSubtract = 1LL*(divBYy*(divBYy+1))/2;

        cout<<toAdd - toSubtract<<nl;
    }      
    return 0;   
}