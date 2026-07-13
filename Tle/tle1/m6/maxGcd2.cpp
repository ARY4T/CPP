#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int a,b;
        cin>>a>>b;
        int ans = 1;

        for(int i=2;i<=b;i++){
            if(b/i - (a-1)/i >= 2) ans = i;
        }
        cout<<ans;
    }      
    return 0;   
}