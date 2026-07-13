#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> perm(n+1);
        for(int i=1;i<=n;++i){
            cin>>perm[i];
        }
        if(perm[1]!=1){
            cout<<"NO"<<nl;
            continue;
        }
        cout<<"YES"<<nl;
        
    }      
    return 0;   
}