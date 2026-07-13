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
        
        int minDiff = INT_MAX;
        for(int i=1;i<v.size();++i){
            minDiff = min(minDiff, v[i]-v[i-1]);
        }

        if(minDiff < 0) cout<<0<<nl;
        else{
            cout<< (minDiff+2)/2 <<nl;
        }
    }      
    return 0;   
}