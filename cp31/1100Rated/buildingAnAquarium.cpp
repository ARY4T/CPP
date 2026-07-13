#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

bool check(ll mid, vector<ll> &a, ll water){
    ll wat=0;
    for(int i=0;i<a.size();++i){
        if(mid>a[i]) wat+=mid-a[i];
    }
    if(wat<=water) return true;
    else return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        ll n,x;
        cin>>n>>x;

        vector<ll> a(n);
        for(auto &el:a)cin>>el;

        ll si=1,ei=1e12,ans=-1;

        while(si<=ei){
            ll mid = (si+ei)/2;
            if(check(mid, a, x)){
                ans=mid;
                si=mid+1;
            }
            else ei=mid-1;
        }
        cout<<ans<<nl;
    }      
  
}