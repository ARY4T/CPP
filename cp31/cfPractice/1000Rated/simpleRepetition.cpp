#include<bits/stdc++.h>
using namespace std;
#define nl "\n"
using ll = long long;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int tc{1};cin>>tc;
    
    while(tc--){
        int x; int k;
        cin>>x; 
        cin>>k;

        if(k == 1){
            int div = 0;
            if(x == 1) {
                cout<<"NO"<<nl;
                continue;
            }
            for(int i=2; i*i<=x; ++i){
                if(x%i == 0) {
                    div+=2;
                    break;
                }
            }
            if(div>1){
                cout<<"NO"<<nl;
            }
            else cout<<"YES"<<nl;
        }
        else{
            if(x == 1 && k == 2){
                cout<<"YES"<<nl;

            }
            else{
                cout<<"NO"<<nl;
            }
        }
    }      
  
}