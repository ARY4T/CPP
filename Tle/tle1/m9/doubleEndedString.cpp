#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        string a,b;
        cin>>a>>b;
        int m = a.length();
        int n = b.length();
        int ans = 0;
        for(int len = 1; len <= min(m,n); ++len){
            for(int i = 0; len+i <= m; ++i){
                for(int j = 0; len + j <= n; ++j){
                    if(a.substr(i, len) == b.substr(j, len)){
                        ans = max(ans, len);
                    }
                }
            }
        }

        cout<< m + n - 2*ans<<nl;
    }      
    return 0;   
}