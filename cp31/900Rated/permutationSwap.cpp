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

        vector<int> p(n);

        for(auto &el:p) cin>>el;

        int k = abs(p[0] - 1);
        for(int i=1; i<n; i++){
            k = gcd(k, abs(p[i] - (i+1)));
        }
        
        cout<<k<<nl;
    }      
    return 0;   
}