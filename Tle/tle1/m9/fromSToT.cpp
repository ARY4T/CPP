#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int q;cin>>q;

    while(q--){
        string s,t,p;
        cin>>s>>t>>p;

        bool possible = true;
        int i=0;
        int j=0;

        while(i<s.length() && j<t.length()){
            if(s[i] == t[j]) i++;
            j++;
        }

        if(i != s.length()) possible = false;

        map<char,int> mpp1;
        map<char,int> mpp2;

        for(auto ch:s) mpp1[ch]++;
        for(auto ch:p) mpp1[ch]++;

        for(auto ch:t) mpp2[ch]++;

        for(auto [ch,freq]:mpp2){
            if(mpp1[ch] < freq){
                possible = false;
                break;
            }
        }

        if(possible) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
        
    }
  
}