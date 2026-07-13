#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

bool strictly_descending(vector<int> v){
    for(int i=1;i<v.size();++i){
        if(v[i]>=v[i-1]) return false;
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n;cin>>n;
        vector<int> v(n);
        for(auto &el:v)cin>>el;

        
        if(strictly_descending(v)) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
    }      
    return 0;   
}