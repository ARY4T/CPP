#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int l,r,k;
        cin>>l>>r>>k;
        if(l==r){
            if(l==1) cout<<"NO"<<nl;
            else cout<<"YES"<<nl;
            continue;
        }
        int tNum = r-l+1;
        int oddNums;
        if(tNum % 2 == 0) oddNums=tNum/2;
        else{
            if(l%2 == 1 && r%2 == 1) oddNums=(tNum + 1)/2;
            else oddNums = (tNum)/2;
        }

        if(k>=oddNums) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

    }      
    return 0;   
}