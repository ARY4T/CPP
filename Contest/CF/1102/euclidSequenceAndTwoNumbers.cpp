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

        for(int i=0; i<n; ++i){
            cin>>v[i];
        }

        sort(v.rbegin(), v.rend());

        bool possible = true;
        for(int i=2; i<n; ++i){
            if(v[i] != v[i-2] % v[i-1]) {
                possible = false;
                break;
            }
        }

        if(!possible) cout<<-1<<nl;
        else{
            cout<<v[0]<<" "<<v[1]<<nl;
        }
    }      
  
}