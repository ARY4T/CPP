#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};
    
    while(tc--){
        int n; cin>>n;
        vector<int> v(n);

        int maxEl = INT_MIN, minEl = INT_MAX;
        int maxInd = -1, minInd = -1;

        for(int i=0; i<n; ++i) {
            cin>>v[i];

            if(v[i] > maxEl) {
                maxEl = v[i];
                maxInd = i;
            }

            if(v[i] <= minEl){
                minEl = v[i];
                minInd = i;
            }
        }

        if(maxInd < minInd) cout<<(maxInd-1+n-minInd)<<nl;
        else cout<<(maxInd-1+n-minInd-1)<<nl;

    }      
  
}