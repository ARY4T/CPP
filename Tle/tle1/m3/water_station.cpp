#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};
    while(t--){
        int n;cin>>n;
        int last_dig{n%10};
        
        int ans;
        if(last_dig<=2&&last_dig>=0){
            ans = n-last_dig;
        }
        else if(last_dig<=7){
            ans = n-last_dig+5;
        }
        else{
            ans = n+10-last_dig; 
        }
        cout<<ans;
    }      
        
}