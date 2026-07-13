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
        vector<int> h(n);
        int minh = INT_MAX;
        int maxh = INT_MIN;
        for(int i=0; i<n; ++i) {
            cin>>h[i];
            minh = min(minh, h[i]);
            maxh = max(maxh, h[i]);
        }   
        
        cout<<maxh - minh + 1<<nl;
    }       
  
}