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

        int mxAns = INT_MIN;

        for(int i=1;i<n;++i){
            mxAns = max(mxAns, v[i] - v[0]);
        }

        for(int i=0;i<n-1;++i){
            mxAns = max(mxAns, v[n-1] - v[i]);
        }  

        for(int i = n-2; i>=0; --i){
            mxAns = max(mxAns, v[i] - v[i+1]);
        }

        if (n == 1) mxAns = 0;
        cout<<mxAns<<nl;

    }      
    return 0;   
}