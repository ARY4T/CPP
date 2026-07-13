#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        string s = "";

        for(int i=0; i<8; ++i){
            for(int j=0; j<8; ++j){
                char c; cin>>c;
                if(c!='.') s+=c;
            }
        }
        cout<<s<<nl;
    }      
  
}