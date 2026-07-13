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

        vector<int> v(n);
        for(auto &el:v) cin>>el;
        
        if(n%2 == 0){
            cout<<2<<nl;
            cout<<1<<" "<<n<<nl;
            cout<<1<<" "<<n<<nl;
        }
        else{
            cout<<4<<nl;
            cout<<1<<" "<<n-1<<nl;
            cout<<1<<" "<<n-1<<nl;
            cout<<n-1<<" "<<n<<nl;
            cout<<n-1<<" "<<n<<nl;
        }
    }      
    return 0;   
}