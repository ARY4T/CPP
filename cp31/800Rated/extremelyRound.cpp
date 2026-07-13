#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n;cin>>n;
        int mxZeroes = 0;
        int lastEl = 0;

        while(n != 0){
            if(n /10 == 0) lastEl = n;
            if(n > 9) mxZeroes++;
            n /= 10;
        }

        int ans = mxZeroes*9 + lastEl;
        cout<<ans<<nl;
    }      
    return 0;   
}