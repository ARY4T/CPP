#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        cout<<1+(n-1)*k<<nl;
    }      
    return 0;   
}