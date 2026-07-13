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

        vector<int> v(n);

        for(auto &el:v) cin>>el;

        int ops = 0;
        for(int i=0;i<n-1;++i){
            if(v[i] == 1){
                v[i]++;
                ops++;
                if(i>0 && v[i-1] % v[i] == 0){
                    v[i]++;
                    ops++;
                }
            }
            
            while(v[i+1]%v[i] == 0){
                v[i+1]++;
                ops++;
            }
        }

        for(auto const &el:v){
            cout<<el<<" ";
        }
        cout<<nl;
    }      
    return 0;   
}