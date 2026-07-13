#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        bool ans = false;
        if(abs(b-c)<=1){
            if(a != 0 && d != 0){
                if(b>0 || c>0) ans = true;
                
            }
            else ans = true;
        } 
        if(ans) cout<<"Yes";
        else cout<<"No";
        
    }      
    return 0;   
}