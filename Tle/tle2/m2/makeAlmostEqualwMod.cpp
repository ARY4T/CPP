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
        vector<ll> v(n);
        for(auto &el:v) cin>>el;

        for(int i=1;i<=60;++i){
            ll num = (1LL<<i);
            set<ll> st;
            for(auto &el:v){
                st.insert(el%num);
            }
            if(st.size() == 2){
                cout<<num<<nl;
                break;
            }
        }
    }      
    return 0;   
}