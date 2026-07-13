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

        int oddCnt = 0;

        for(int i=0;i<n;++i){
            int el;cin>>el;
            if(el % 2 == 1) oddCnt++;
        }
        if(oddCnt % 2 == 0) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
    return 0;   
}