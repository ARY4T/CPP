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
        int x;cin>>x;
        vector<ll> v(n);

        ll min = 0;
        ll max = 0;
        for(auto &el:v) {
            cin>>el;
            max += ceil((double)el/x);
            min += el;
        }

        min = ceil((double)min/x);

        cout<<min<<" "<<max<<nl;
    }      
  
}