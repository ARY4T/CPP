#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;
        string s, t;
        cin>>s>>t;

        int count[26] = {0};

        for(int i=0; i<n; ++i){
            count[s[i]-'a']++;
        }
        bool possible = true;
        for(int i=0; i<n; ++i){
            if(--count[t[i]-'a'] < 0){
                possible = false;
                break;
            }
        }
        if(possible) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
  
}