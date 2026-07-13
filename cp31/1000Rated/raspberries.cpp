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

        vector<int> v(n);

        for(auto &el:v){
            cin>>el;
        }

        int ans = INT_MAX;
        int evens = 0;

        for(int i=0;i<n;++i){
            if(v[i]%2 == 0) evens++;

            if(v[i]%k == 0) ans = 0;
            
            ans = min(ans, (k-v[i]%k));

        }

        if(k == 4){
            if(evens >= 2) ans = min(ans, 0);
            else if(evens == 1) ans = min(ans,1);
            else if(evens == 0) ans = min(ans, 2);
        }
        cout<<ans<<nl;
    }       
}