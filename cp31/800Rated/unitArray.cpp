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
        int prod = 1;
        int sum = 0;
        for(int i=0;i<n;++i){
            int el;
            cin>>el;
            sum += el;
            prod *= el;
        }

        if(sum>=0){
            if(prod > 0){
                cout<<0<<nl;
            }
            else{
                cout<<1<<nl;
            }
        }
        else {
            int ans = 0;
            if(prod > 0){
                while(sum<0){
                    sum+=4;
                    ans+=2;
                }
                cout<<ans<<nl;
            }
            else{
                ans += 1;
                sum += 2;
                while(sum<0){
                    sum+=4;
                    ans+=2;
                }
                cout<<ans<<nl;
            }
        }
    }      
    return 0;   
}