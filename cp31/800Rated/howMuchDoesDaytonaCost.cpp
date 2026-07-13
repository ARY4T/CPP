#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;

        vector<int> v(n);
        for(auto &el:v) cin>>el;
        bool possible = false;
        for(auto &el:v){
            if(el == k) {
                possible = true;
                break;
            }
        }
        if(possible) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }      
    return 0;   
}