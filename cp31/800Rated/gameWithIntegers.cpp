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
        if((n-1)%3==0||(n+1)%3==0){
            cout<<"First"<<nl;
            continue;}
        cout<<"Second"<<nl;
    }      
    return 0;   
}