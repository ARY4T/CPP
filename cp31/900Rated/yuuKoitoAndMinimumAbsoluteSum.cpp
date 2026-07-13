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

        if (v[0] == -1 && v[n-1] == -1) {
            v[0] = 0; v[n-1] = 0;
        } else if (v[0] == -1) {
            v[0] = v[n-1];
        } else if (v[n-1] == -1) {
            v[n-1] = v[0];
        }

        cout << abs(v[n-1] - v[0]) << nl;

        for(int i = 0; i < n; ++i) {
            if(v[i] == -1) v[i] = 0;
            cout << v[i] << " ";
        }
        cout << nl;
    }      
  
}