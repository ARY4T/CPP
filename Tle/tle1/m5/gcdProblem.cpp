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
        
        if(n%2 == 0){
            cout<<(n-1)/2<<" "<<(n-1)/2+1<<" "<<1<<nl;
        }
        else{
            int div = (n-1)/2;
            if(div%2==0) cout<<div-1<<" "<<div+1<<" "<<1<<nl;
            else cout<<div-2<<" "<<div+2<<" "<<1<<nl;
        }
    }      
    return 0;   
}