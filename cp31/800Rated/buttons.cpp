#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int a,b,c;
        cin>>a>>b>>c;
        bool ans = 1;
        if((c+1/2) %2 == 0){
            if(a>b) ans = 1;
            else ans = 0;
        }
        else{
            if(a>b-1) ans = 1;
            else ans = 0;
        }
        if(ans) cout<<"First"<<nl;
        else cout<<"Second"<<nl;
    }      
    return 0;   
}