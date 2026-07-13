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
        vector<string> s(n);
        for(auto &el:s) cin>>el;
        int x = n/2;
        int y = n/2;
        if(n%2==1) x++;

        int op = 0;
        for(int i=0;i<y;++i){
            
            for(int j=0;j<x;++j){
                int ones = 0;
                if(s[i][j]=='1') ones++;
                if(s[j][n-i-1]=='1') ones++;
                if(s[n-i-1][n-j-1] == '1') ones++;
                if(s[n-j-1][i] == '1') ones++;
                if(ones == 2) op+=2;
                else if(ones == 1 || ones == 3) op+=1; 
            }
            
        }
        cout<<op<<nl;
    }      
    return 0;   
}