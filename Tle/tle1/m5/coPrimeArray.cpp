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
        vector<int> v(n);
        for(auto &el:v) cin>>el;
        int cnt=0;
        vector<int> ans;

        for(int i=0;i<n-1;++i){
            if(gcd(v[i],v[i+1]) != 1){               
                cnt++;
                ans.push_back(v[i]);
                ans.push_back(1);   
            }
            else ans.push_back(v[i]);
        }
        ans.push_back(v[n-1]);
        cout<<cnt<<nl;
        for(auto el:ans) cout<<el<<" ";
        cout<<nl;
    }      
    return 0;   
}