#include<bits/stdc++.h>

using namespace std;
#define nl "\n"
using ll = long long;

ll gcdLL(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;
        vector<int> v(n);
        for(auto &el:v) cin>>el;

        ll ans = 0;
        ll sum = 0;

        ll totalSum = accumulate(v.begin(), v.end(), 0LL);

        for(int i=0; i<n-1; ++i){
            sum+=v[i];
            ll gcd1 = gcdLL(totalSum-sum, sum);
            ans = max(ans, gcd1);
        }
        cout<<ans<<nl;
    }      
  
}