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
        string s;cin>>s;

        while(s.length() != 0){
            if(s[0] != s[s.length()-1]){
                if(s.length() >= 2)
                s = s.substr(1, s.length()-2);
            }
            else break;
        }
        cout<<s.length()<<nl;
    }      
    return 0;   
}