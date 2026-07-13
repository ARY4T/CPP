#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        ll a,b,n;
        cin>>a>>b>>n;

        vector<int> tools(n);

        for(auto &el:tools)cin>>el;

        ll ans = b-1;


        for(int i=0;i<n;++i){
            if(tools[i]+1<=a) ans+=tools[i];

            else if(tools[i]+1>a) {
                ans+=a-1;

            }
        }
        ans++;
        cout<<ans<<nl;
    }      
    return 0;   
}