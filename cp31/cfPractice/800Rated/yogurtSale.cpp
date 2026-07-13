#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n, a, b;
        cin>>n>>a>>b;

        int ans = -1;

        if(2*a >= b){
           int mul2 =  n/2;
           int mul1 = n%2;

           ans = mul2*b + mul1*a;
        }
        else{
            ans = n*a;
        }

        cout<<ans<<nl;
    }      
  
}