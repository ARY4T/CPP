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
        string a;cin>>a;
        int m;cin>>m;
        string b;cin>>b;

        string c;cin>>c;

        string f="",ba="";
        for(int i=0;i<m;++i){
            if(c[i] == 'D') ba+=b[i];
            else f+=b[i];
        }
        reverse(f.begin(),f.end());
        cout<<f+a+ba<<nl;
    }      
  
}