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

        vector<char> v(26);
        for(int i=0; i<26; ++i){
            v[i] = i;
        }

        int rot = 0;
        char last = 0;

        for(int i=0; i<n; ++i){
            rot += min(abs(v[s[i]-'a'] - last), 26-abs((v[s[i]-'a']-last)));
            last = s[i]-'a';
        }
        cout<<rot;
    }      
  
}