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
        ll scoreA=0,scoreB=0;
        vector<int> v(n);
        for(auto &el:v) cin>>el;
        sort(v.begin(),v.end());
        bool turnAlice = true;
        for(int i = v.size()-1; i>=0; --i){
           if(turnAlice) {
            if(v[i]%2==0) scoreA+=v[i];
           }
           else{
            if(v[i]%2==1) scoreB+=v[i];
           }
           turnAlice = (!turnAlice);
        }

        if(scoreA == scoreB) cout<<"Tie"<<nl;
        else if(scoreA > scoreB) cout<<"Alice"<<nl;
        else cout<<"Bob"<<nl;
    }      
    return 0;   
}