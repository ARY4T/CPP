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
        int cnt=0;
        for(int i=1;i*i<=n;++i){
            if(n%i==0 && i*i==n) cnt+=1;
            else if(n%i==0) cnt+=2;
        }
        cout<<cnt<<nl;
    }      
    return 0;   
}