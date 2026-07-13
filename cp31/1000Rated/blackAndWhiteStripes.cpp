#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,k;
        cin>>n>>k;

        string s;cin>>s;

        int l = 0 , r = 0;
        int whites = 0;
        int ans = INT_MAX;
        while(r<k){
            if(s[r] == 'W') whites++;
            r++;
        }
        ans = whites;
        while(r<n){
            if(s[r] == 'W') whites++;
            if(s[l] == 'W') whites--;
            ans = min(ans, whites);
            r++;
            l++;
        }
        cout<<ans<<nl;
    }      
}