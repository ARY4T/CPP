#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int a, b;
        cin>>a>>b;
        int ans = 0;
        if(a%b == 0) ans = 0;
        else if(a<b) ans = b-a;
        else {
            int remainder = a%b;
            ans = b - remainder;
        }
        cout<<ans<<nl;
    }      
    return 0;   
}