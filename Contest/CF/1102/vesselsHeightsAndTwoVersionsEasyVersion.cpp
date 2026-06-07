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

        vector<ll> h(n);

        for(int i=0; i<n; ++i) cin>>h[i];

        vector<ll> ans(n);

        for(int i=0; i<n; ++i){
            vector<int> forw(n), back(n);
            ll backMax = h[i];

            for(int step=1; step<n; ++step){
                int j = (i+step)%n;

               forw[j] = backMax;
               backMax = max(h[j], backMax);
            }

            ll forwMax = h[(i-1+n)%n];

            for(int step=1; step<n; ++step){
                int j = (i-step+n)%n;

                back[j] = forwMax;
                forwMax = max(forwMax, h[(j-1+n)%n]);
            }

            vector<int> w(n);

            for(int j=0; j<n; ++j){
                w[j] = min(forw[j], back[j]);
            }

            w[i] = 0;

            ll sum = accumulate(w.begin(), w.end(), 0LL);
            ans[i] = sum;
            
        }

        for(int i=0; i<n; ++i){
            cout<<ans[i]<<" ";
        }
        cout<<nl;
    }      
  
}