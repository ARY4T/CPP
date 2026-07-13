#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        map<int,int> prevOcc;
        vector<int> v(n);
        for(auto &el:v) {
            cin>>el;
        }

        for(int i=1;i<=k;++i){
            prevOcc[i] = -1;
        }
        int ans = 0;

        for(int i=0; i<n; ++i){
            
            ans = max(ans, i - prevOcc[v[i]] - 1);
            prevOcc[v[i]] = i;
            
        }

        for(int i= 1; i<=k ; ++i){
            ans = max(ans, n - prevOcc[i] - 1);

        }

        cout<<ans<<nl;

    }      
    return 0;   
}