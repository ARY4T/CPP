#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int a1,a2,b1,b2;
        cin>>a1>>a2>>b1>>b2;

        int ans = 0;
        if((a1>b1 && a2>=b2)||(a1 >= b1 && a2>b2)) ans+=2;
        if((a1>b2 && a2>=b1)||(a1 >= b2 && a2>b1)) ans+=2;

        cout<<ans<<nl;


    }      
    return 0;   
}