#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    int mod = 998244353;

    while(tc--){
        string s; cin>>s;

        vector<int> blocks;
        int len = 1;

        for(int i=1; i<s.size(); ++i){
            if(s[i] == s[i-1]){
                len++;
            }
            else{
                blocks.push_back(len);
                len = 1;
            }
        }

        blocks.push_back(len);

        int minOps = accumulate(blocks.begin(), blocks.end(), 0) - blocks.size();

        ll seq = 1;

        for(int i=0; i<blocks.size(); ++i){
            seq *= (blocks[i]%mod);
            seq %= mod;
        }

        for(int i=2; i<=minOps; ++i){
            seq *= i;
            seq %= mod;
        }
        
        cout<<minOps<<" "<<seq<<nl;

    }      
  
}