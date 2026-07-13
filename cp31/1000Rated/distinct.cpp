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
        string s;cin>>s;

        vector<int> prefixDist(n);
        set<char> dist;
        for(int i=0;i<n;++i){
            dist.insert(s[i]);
            prefixDist[i] = dist.size();
        }

        vector<int> suffixDist(n);
        dist.clear();
        for(int i=n-1;i>=0;--i){
            dist.insert(s[i]);
            suffixDist[i] = dist.size();
        }

        int ans=0;
        for(int i=0;i<n-1;++i){
            if(prefixDist[i] + suffixDist[i+1] > ans)
                ans = prefixDist[i] + suffixDist[i+1];
        }
        cout<<ans<<nl;
    }      
  
}