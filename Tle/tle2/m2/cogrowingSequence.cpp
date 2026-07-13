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
        vector<int> x(n);
        for(auto &el:x) cin>>el;

        vector<int> y(n);

        for(int j=0; j<30; ++j){
            bool found= false;
            for(int i=0; i<n; ++i){
                if(!found && ((1<<j)&x[i]) != 0) found=true;
                else if(found && ((1<<j)&x[i]) == 0) y[i] += 1<<j;
            }
        }

        for(int i=0; i<n; ++i){
            cout<<y[i]<<" ";
        }
        cout<<nl;
    }      
  
}