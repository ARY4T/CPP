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

        sort(v.begin(),v.end());
        bool isPossible = false;
        for(int i=0;i<n;++i){
            for(int j=i+1;j<n;++j){
                if(gcd(v[i],v[j])<=2){
                    isPossible = true;
                    break;
                }
            }
            if(isPossible) break;
        }

        if(isPossible) cout<<"Yes"<<nl;
        else cout<<"No"<<nl;
    }      
    return 0;   
}