#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        string s;
        cin>>s;

        if(s[0] != s[s.length()-1]){
            s[s.length()-1] = s[0];
        }
        cout<<s<<nl;
    }      
  
}