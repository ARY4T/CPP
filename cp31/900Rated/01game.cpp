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

        int zeroes = 0,ones = 0;
        
        for(int i=0;i<s.length();++i){
            if(s[i] == '0') zeroes++;
            else ones++;
        }

        int moves = min(zeroes, ones);

        if(moves%2) cout<<"DA"<<nl;
        else cout<<"NET"<<nl;
    }      
}