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
        vector<int> b;
        for(int i=0;i<n;++i){
            int el;cin>>el;
            b.push_back(n-el+1);
        }
        for(auto el:b){
            cout<<el<<" ";
        }
        cout<<nl;
    }      
    return 0;   
}