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
        int n, k;
        cin>>n>>k;

        vector<int> v(n);
        for(int i=0; i<n; ++i) cin>>v[i];
        
        int ind = 0;
        unordered_map<int, int> mp;
        
        while(ind<n){
            int nextInd = (upper_bound(v.begin(), v.end(), v[ind])-v.begin());
            int cnt = nextInd - ind;
            ind = nextInd;
            mp[cnt]++;
        }
        
        int ans = 0;
        int sum = 0, tot = 0;

        for(int i=n; i>=1; --i){
            if(mp[i] == 0) continue;

            sum += mp[i]*i;
            tot += mp[i];

            // min poss sum value of current state is cur,
            int cur = sum - (i-1)*tot;

            if((k-cur)>=0 && (k-cur)%tot == 0) ans++;
        }

        cout<<ans<<nl;
        
    }      
  
}