#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n, x, y;
        cin>>n>>x>>y;

        vector<int> v(n);
        for(auto &el:v) cin>>el;

        map<pair<int, int>, int> frq;
        ll ans = 0;

        for(auto &el : v){
            int tgtX = (x - el%x)%x;
            int tgtY = el%y;

            ans += frq[{tgtX, tgtY}];

            frq[{el%x, el%y}]++;
        }

        cout<<ans<<nl;
    }      
  
}