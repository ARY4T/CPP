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
        vector<int> v(n+1);
        for(int i=1; i<=n; ++i) cin>>v[i];
        int pairs = 0;

        for(int i=1; i<=n; ++i){
            int j = v[i]-i;
            while(j<=i) j+=v[i];
            
            for(; j<=n; j+=v[i]){
                if((1LL)*v[i]*v[j] == (1LL)*i+j) {
                    pairs++;
                }
            }
        }

        cout<<pairs<<nl;
    }      

}