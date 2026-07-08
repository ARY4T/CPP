#include<bits/stdc++.h>
using namespace std;

#define nl "\n"
#define pb push_back
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        string a, b;
        cin>>a>>b;
        int n = a.size(), m = b.size();

        vector<int> pref1(n+1), pref2(m+1);

        for(int i=0; i<n; ++i){
            pref1[i+1] = (pref1[i] + (a[i]-'0'))%10;
        }
        for(int i=0; i<m; ++i){
            pref2[i+1] = (pref2[i] + (b[i]-'0'))%10;
        }

        vector<vector<int>> dp(n+1, vector<int> (m+1));

        for(int i=1; i<=n; ++i){
            for(int j=1; j<=m; ++j){
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);

                if(pref1[i] == pref2[j]){
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
            }
        }

        cout<<(pref1[n] == pref2[m]? dp[n][m] : -1)<<nl;

    }      
  
}