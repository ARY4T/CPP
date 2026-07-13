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

        for(int i=0; i<n; ++i){
            cin>>v[i];
        }

        int isPossible = false;
        for(int i=0; i<n; ++i){
           for(int j=0; j<n; ++j){
                if(i == j) continue;

                if(v[i] ==v[j]) {
                    isPossible = true;
                    break;
                }
           }
        }

        if(isPossible) cout<<"YES"<<nl;
        else cout<<"NO"<<nl;

    }        
}