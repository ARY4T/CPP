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
        int f = 0;

        if(f == 0){

            for(int i=2; i*i<=n; ++i){
                if(n%i == 0){
                    int k = n/i; 
                    cout<<k<<" "<<n-k<<nl;

                    f = 1;
                    break;
                }
            }
        }

        if(f == 0){
            cout<<1<<" "<<n-1<<nl;
        }
      
    }      
  
}