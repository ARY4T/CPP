#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    
    while(tc--){
        string s; cin>>s;
        int n = s.size();
        string ans = "";

        for(int i=0; i<n; ++i){
            if(s[i] == 'W' && i+2<n && s[i+1]=='U' && s[i+2] == 'B'){
                i+=2;
                if(!ans.empty() && ans.back() != ' ') ans+=" ";
            }
            else ans+=s[i];
        }

        cout<<ans<<nl;
    }      
  
}