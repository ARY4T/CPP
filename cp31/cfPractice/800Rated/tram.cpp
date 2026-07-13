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
        int ans{0};
        int current{0};
        while(n--){
            int a,b; cin>>a>>b;
            current -= a;
            current += b;
            ans = max(ans, current);
        }

        cout<<ans<<nl;
    }      
  
}