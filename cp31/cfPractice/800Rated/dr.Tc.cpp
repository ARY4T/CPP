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
        string s; cin>>s;

        int cnt = 0;
        for(int i=0; i<n; ++i){
            if(s[i] == '1') cnt += n-1;
            else cnt += 1;
        }
        cout<<cnt<<nl;
    }      
  
}