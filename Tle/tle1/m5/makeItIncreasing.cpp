#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    
    while(tc--){
        int n;cin>>n;
        
        vector<ll> a(n);

        for(auto &el:a) cin>>el;

        ll min_ops = -1;

        for(int i=0;i<n;++i){
            vector<ll> b(n,0);
            ll ops = 0;

            for(int j=i-1;j>=0;--j){

                ll k = (b[j+1]-1)/a[j];

                if( b[j+1]-1 < 0 && (b[j+1]-1)%a[j] != 0){
                    k--;
                }
                b[j] = k*a[j];
                ops += abs(k);

            }

            for(int j=i+1;j<n;++j){
                ops += b[j-1]/a[j] + 1;
                b[j] = (b[j-1]/a[j] + 1)*a[j];

            }

            if(min_ops == -1 || ops < min_ops){
                min_ops = ops;
            }
        }

        cout<<min_ops<<nl;
    }      
    return 0;   
}