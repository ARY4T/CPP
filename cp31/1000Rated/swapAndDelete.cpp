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

        int n = s.size();
        int zeroes = 0;
        int ones = 0;

        for(auto ch:s){
            if(ch == '1')ones++;
            else zeroes++;
        }

        vector<int> prefixZeroes(n+1),prefixOnes(n+1);

        for(int i=1;i<=n;++i){
            prefixZeroes[i] = prefixZeroes[i-1] + (s[i-1] == '0'? 1:0);
            prefixOnes[i] = prefixOnes[i-1] + (s[i-1] == '1'?1:0);
        }

        for(int k=n;k>=0;--k){
            int zeroesNeeded = prefixOnes[k];
            int onesNeeded = prefixZeroes[k];
            if(zeroesNeeded <= zeroes && onesNeeded <= ones){
                cout<<n-k<<nl;
                break;
            }
        }
    }      
}