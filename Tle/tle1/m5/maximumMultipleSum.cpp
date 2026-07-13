#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t{1};cin>>t;
    while(t--){
        int n;cin>>n;
        int ans = 0;
        int sumMax = 0;
        for(int i=2;i<=n;++i){
            int multiple = n/i;
            int sum = (i*(multiple*(multiple+1)))/2;
            if(sum>sumMax) {ans = i;sumMax=sum;}
        }
        cout<<ans<<nl;
    }      
    return 0;   
}
