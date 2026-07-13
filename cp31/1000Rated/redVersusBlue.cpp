#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n,r,b;
        cin>>n>>r>>b;

        int baseR = r/(b+1);
        int extraR = r%(b+1);

        string ans = "";
        
        for(int i=0;i<b;++i){
            if(extraR){
                ans += 'R';
                extraR--;
            }
            ans += string(baseR, 'R');
            ans += 'B';
        }
        if(extraR){
                ans += 'R';
                extraR--;
        }
        ans += string(baseR, 'R');
        cout<<ans<<nl;
    }       
}