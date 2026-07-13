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
            cout<<n/2<<nl;
        }
        else cout<<(n-1)/2<<nl;
    }      
    return 0;   
}