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

        ll cnt = (n*(n-1))/2;

        vector<ll> v(cnt);
        for(auto &el:v) cin>>el;

        sort(v.begin(), v.end());

        vector<int> a;
        int curBInd = 0;
        int move = n-1;

        while(curBInd < cnt){
            a.push_back(v[curBInd]);
            curBInd += move;
            move--;
        }

        a.push_back(v[cnt-1]);

        for(auto el:a){
            cout<<el<<" ";
        }
        cout<<nl;

    }      
}