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
        int n, d;
        cin>>n>>d;

        vector<int> v(n);

        for(int i=0; i<n; ++i) {
            cin>>v[i];
        }

        vector<int> b = v;

        v.insert(v.end(), b.begin(), b.end());
        v.insert(v.end(), b.begin(), b.end());

        vector<ll> pfSum(3*n+1);

        for(int i=1; i<=3*n; ++i){
            pfSum[i] = pfSum[i-1] + v[i-1];
        }

        ll score = 0;
        for(int i=n; i<2*n; ++i){
            ll happy = 1LL*v[i]*(2*d+1) - (pfSum[d+i+1] - pfSum[i-d]);
            if(happy > 0) score += happy;
        }

        cout<<score<<nl;

    }      
  
}