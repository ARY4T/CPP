#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        string s,t;
        cin>>s>>t;
        string ans = "";

        map<char,int> mpp;
        for(int i=0;i<t.size();++i){
            mpp[t[i]]++;
        }

        for(int i=s.length()-1 ;i>=0; --i){
            if(mpp[s[i]]>0){
                ans+=s[i];
                mpp[s[i]]--;
            }
        }

        reverse(ans.begin(), ans.end());
        if(ans == t) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
  
}