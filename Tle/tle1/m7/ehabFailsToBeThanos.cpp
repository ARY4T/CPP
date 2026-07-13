#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    while(tc--){
        int n;cin>>n;
        vector<int> v(2*n);
        for(auto &el:v) {
            cin>>el;
        }
        int num = v[0];
        bool allSame = true;
        for(auto &el:v){
            if(el != num){
                allSame = false;
                break;
            }
        }
        if(allSame){
            cout<<-1;
        }
        else{
            sort(v.begin(),v.end());
        
            for(auto &el:v) cout<<el<<" ";
            cout<<nl;
        }
        
    }      
    return 0;   
}