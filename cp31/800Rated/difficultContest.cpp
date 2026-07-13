#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    
    while(tc--){
        string s;cin>>s;
        string str1 = "";
        string str2 = "";

        for(int i=0;i<s.length();++i){
            if(s[i] == 'T') str1+=s[i];
            else str2 += s[i];
        }
        
        cout<<str1+str2<<nl;
    }      
  
}