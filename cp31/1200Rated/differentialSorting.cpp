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
        vector<ll> v(n);
        for(ll &el:v) cin>>el;

        if(is_sorted(v.begin(), v.end())) cout<<0<<nl;

        else if(v[n-2] > v[n-1] || v[n-1] < 0) cout<<-1<<nl;

        else{
            cout<<n-2<<nl;
            for(int i=1; i<=n-2; ++i){
                cout<<i<<" "<<n-1<<" "<<n<<nl;
            }
        }
    }      
  
}