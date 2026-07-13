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
        int a,b; cin>>a>>b;
        
        bool haveAns = false;
        pair<int,int> ans;
        for(int i=0;i<=n/a;++i){
            int remaining = n - i*a;
                if(remaining % b == 0){
                    haveAns = true;
                    ans = {i,remaining/b};
                    break;
                }
        }
        if(haveAns){
            cout<<"YES"<<nl;
            cout<<ans.first<<" "<<ans.second<<nl;
        }
        else cout<<"NO"<<nl;
    }      
    return 0;   
} 