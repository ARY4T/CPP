#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        ll n,m,k;
        cin>>n>>m>>k;

        vector<ll> des(n);
        for(int i=0;i<n;++i){
            cin>>des[i]; 
        }
        sort(des.begin(),des.end());
        multiset<ll> size;
        for(int i=0;i<m;++i){
            ll el;cin>>el;
            size.insert(el);
        }
        ll ans = 0;
        for(auto const &apSize: des){
            auto it = size.lower_bound(apSize-k);
            if(it != size.end() && *it <= apSize+k){
                ans+=1;
                size.erase(it);
            }
        }
        cout<<ans;
    }      
    return 0;   
}