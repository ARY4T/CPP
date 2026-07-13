#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        ll n,x,y;
        cin>>n>>x>>y;
        vector<int> v(n);
        for(auto &el:v){
            cin>>el;
        }
        ll sum = accumulate(v.begin(),v.end(),0);
        if((sum+x+y)%2==0) cout<<"Alice"<<nl;
        else cout<<"Bob"<<nl;
    }      
    return 0;   
}