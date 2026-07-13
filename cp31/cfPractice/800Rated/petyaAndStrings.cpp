#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    
    while(tc--){
        string s1, s2;
        cin>>s1>>s2;

        for(auto &ch:s1){
            ch = tolower(ch);
        }
        for(auto &ch:s2){
            ch = tolower(ch);
        }
        if(s1 == s2) cout<<0;
        else if(s1>s2) cout<<1;
        else cout<<-1;
    }      
  
}