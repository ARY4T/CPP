#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int  n;cin>>n;
        vector<int> v(n);
        
        for(auto &el:v) cin>>el;
        
        sort(v.rbegin(),v.rend());
        if(v[0] != v[1]){
            cout<<"YES"<<nl;
            for(auto &el:v) cout<<el<<" ";
            cout<<nl;
        }
        else{
            int el = v[0];
            bool flag = false;
            int index = 0;
            for(int i=1;i<n;++i){
                if(v[i] != el){
                flag = true;
                index = i;
                break;
                }
            }
            if(flag){
                swap(v[1],v[index]);
                cout<<"YES"<<nl;
                for(auto &el:v) cout<<el<<" ";
                cout<<nl;
            }
            else cout<<"NO"<<nl;


        }
        
    }      
    return 0;   
}