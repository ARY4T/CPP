#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;
    getline(cin,s);

    string ans = "";

    for(int i=0;i<s.size();++i){
        if(isspace(s[i])) continue;

        if(isalpha(s[i])){
            if(!ans.empty()){
                ans += " ";
            }
            while(i<s.size() && isalpha(s[i])){
                ans += s[i];
                i++;
            }
            i--;
        }
        
        else ans+=s[i];
    }
    cout<<ans;
}