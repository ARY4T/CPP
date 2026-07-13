#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;

        if(n<=3) cout<<n<<nl;
        else{
            int num1 = n/2;
            cout<<n-2*num1<<nl;
        }
    }      
  
}