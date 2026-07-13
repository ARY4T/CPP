#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int n; cin>>n;
        vector<int> v(n);
        map<int,int> mpp;

        int mxCnt = 0;
        for(auto &el:v) {
            cin>>el;
            mpp[el]++;
            mxCnt = max(mxCnt, mpp[el]);
        }

        int remEl = n-mxCnt;

        int ops = remEl;

        while(remEl > 0){
            ops += 1;
            remEl -= mxCnt;
            mxCnt *= 2;
            
        }

        cout<<ops<<nl;

    }      
  
}